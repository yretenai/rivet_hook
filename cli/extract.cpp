#include <array>
#include <fstream>
#include <iostream>

#include <rivet/data/dag.hpp>
#include <rivet/data/toc.hpp>
#include <rivet/hash/asset_id.hpp>
#include <rivet/rivet_game.hpp>
#include <rivet/structures/rivet_archive.hpp>
#include <rivet/structures/rivet_asset.hpp>

using namespace rivet;
using namespace rivet::structures;

const std::array<std::string, 32> localization_enum {
		"none",
		"us",
		"gb",
		"dk",
		"nl",
		"fi",
		"fr",
		"de",
		"it",
		"jp",
		"kr",
		"no",
		"pl",
		"pt",
		"ru",
		"es",
		"se",
		"br",
		"ar",
		"tr",
		"la",
		"cs",
		"ct",
		"fc",
		"cz",
		"hu",
		"el",
		"ro",
		"th",
		"vi",
		"id",
		"hr"
};

int main(int argv, const char **argc) {
	try {
		if (argv < 2) {
			std::cout << "usage: rivet-extract path/to/game path/to/dump\n";
			return 1;
		}

		auto game = std::make_shared<rivet_game>(std::filesystem::path(argc[1]));
		if (argv < 3) {
			std::cout << "no output path provided, exiting\n";
			return 0;
		}

		auto streamed_files_path = std::filesystem::path("streamed_files.txt");
		if (std::filesystem::exists(streamed_files_path)) {
			game->load_streamed_files_list(streamed_files_path);
		}


		auto root_prefix = std::string("d/");

		const std::filesystem::path dump(argc[2]);
		const std::filesystem::path dag_path = dump / root_prefix / "missing.txt";
		std::filesystem::create_directories(dag_path.parent_path());
		std::ofstream dag_file(dag_path, std::ios::out);
		if (!dag_file.is_open()) {
			std::cout << "Failed to open output file " << dag_path << '\n';
			return 1;
		}

		for (const auto &asset: game->dag->missing_assets) {
			dag_file << asset.second->name.value() << '\n';
		}
		dag_file.close();

		for (auto locale_id = 0; locale_id < 32; locale_id++) {
			auto locale = static_cast<rivet_locale>(locale_id);

			for (auto category_id = 0; category_id < 4; category_id++) {
				auto category = static_cast<rivet_asset_category>(category_id);
				for (auto subtype_id = 0; subtype_id < 2; subtype_id++) {
					auto assets = game->toc->get_group(locale, category, subtype_id == 1);

					for (const auto &asset: assets) {
						if (!game->prepare_archive(asset)) {
							continue;
						}

						std::string name;
						if (!asset->name.has_value()) {
							if ((asset->id & 0x4000000000000000) != 0) {
								name = "sound/wem/" + std::to_string(asset->id & 0xFFFFFFFF) + std::string(".wem");
							} else {
								if (asset->archive->name.find('/') == std::string::npos &&
									asset->archive->name.find('\\') == std::string::npos) {
									name = root_prefix + std::string(asset->archive->name) + "/" +
										   std::to_string(asset->id);
								} else {
									name = std::string(asset->archive->name) + "/" + std::to_string(asset->id);
								}
							}
						} else {
							name = asset->name.value();
							rivet::hash::normalize_asset_path(name);
						}

						if (name.ends_with("/localization_all.localization")) {
							name = name.substr(0, name.find_last_of('/')) + "/localization_" +
								   localization_enum[locale_id] + ".localization";
						} else if (locale_id > 0) {
							name = name.substr(0, name.find_last_of('/')) + "/" + localization_enum[locale_id] + "/" +
								   name.substr(name.find_last_of('/') + 1);
						}

						auto asset_data = game->open_file(asset);
						if (asset_data == nullptr || asset_data->empty()) {
							std::cout << "Failed to open asset " << name << '\n';
							continue;
						}

						if (subtype_id == 1 && asset->flags.is_texture) {
							name += ".stream";
						}

						std::cout << "Writing " << name << '\n';

						// rename .movie to .bik
						if (asset_data->get<uint32_t>(0) == 0x6A32424B) {
							name = name.substr(0, name.find_last_of('.')) + ".bik";
						}

						auto output_path = dump / name;
						std::filesystem::create_directories(output_path.parent_path());
						std::ofstream asset_file(output_path, std::ios::binary | std::ios::out);

						if (!asset_file.is_open()) {
							std::cout << "Failed to open output file " << output_path << '\n';
							continue;
						}

						if (asset->header.has_value()) {
							asset_file.write(reinterpret_cast<const char *>(&asset->header.value()),
											 sizeof(rivet_asset_header));
						}

						if (asset->texture_header.has_value()) {
							asset_file.write(reinterpret_cast<const char *>(&asset->texture_header.value()),
											 sizeof(rivet_asset_texture_header));
						}

						asset_file.write(reinterpret_cast<const char *>(asset_data->data()),
										 static_cast<std::streamsize>(asset_data->byte_size()));
						asset_file.close();
					}
				}
			}
		}
	} catch (std::exception &e) {
		RIVET_DEBUG_BREAK;
		try {
			std::cout << "Exception: " << e.what() << '\n';
		} catch (...) {}
		return 1;
	}

	return 0;
}