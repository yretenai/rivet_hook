// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <fstream>
#include <iostream>

#include <rivet/data/dag.hpp>
#include <rivet/data/dat1.hpp>
#include <rivet/data/toc.hpp>

#include "helper.hpp"

using namespace rivet;
using namespace rivet::data;
using namespace rivet::structures;

auto
dump_dat1(const std::vector<std::string_view> &args) -> int {
	if (args.empty()) {
		std::cout << "Usage: rivet-dat1-dump <path-to-dat1> [output-path]\n";
		return 1;
	}

	auto dat1_path = std::filesystem::path(args[0]);
	if (!std::filesystem::exists(dat1_path)) {
		std::cout << dat1_path << " does not exist\n";
		return 2;
	}

	std::filesystem::path output_path;
	if (args.size() > 1) {
		output_path = std::filesystem::path(args[1]);
	} else {
		output_path = dat1_path;
		output_path.replace_extension(".sections");
	}

	if (!std::filesystem::exists(output_path)) {
		std::filesystem::create_directories(output_path);
	}

	auto dat1_buffer = rivet_data_array::from_file(dat1_path);
	if (dat1_buffer == nullptr) {
		std::cout << "failed to load " << dat1_path << '\n';
		return 3;
	}

	auto tag = dat1_buffer->get<uint32_t>(0);
	if (tag == archive_toc::magic || tag == archive_toc::magic_compressed) {
		dat1_buffer = archive_toc::get_toc_data_buffer(dat1_buffer);
	} else if (tag == dependency_dag::magic || tag == dependency_dag::magic_compressed) {
		dat1_buffer = dependency_dag::get_dag_data_buffer(dat1_buffer);
	}

	auto dat = std::make_shared<dat1>(dat1_buffer);
	for (const auto &section : dat->sections) {
		std::cout << "section " << std::setfill('0') << std::setw(8) << std::hex << section.first << '\n';

		auto filename_stream = std::stringstream();
		filename_stream << std::setfill('0') << std::setw(8) << std::hex << section.first << ".bin";
		auto section_path = output_path / filename_stream.str();

		std::ofstream section_file(section_path, std::ios::binary);
		if (!section_file.is_open()) {
			std::cout << "failed to open " << section_path << '\n';
			return 4;
		}

		section_file.write(reinterpret_cast<const char *>(section.second.second->data()), static_cast<std::streamsize>(section.second.second->size()));
	}

	return 0;
}

MAIN_WRAPPER(dump_dat1)