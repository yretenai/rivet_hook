// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <string_view>
#include <array>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_keywords.hpp>

namespace rivet::ddl::generated {
	constexpr const static std::string_view xbd1cea43_type_name = "xbd1cea43";
	constexpr const static rivet::rivet_type_id xbd1cea43_type_id = 0xbd1cea43;

	constexpr const static std::array<std::string_view, 7> xbd1cea43_values = {
		"kName",
		"kPath",
		"kCreatedBy",
		"kLastModifiedBy",
		"kCollection",
		"kTags",
		"kVaultId", 
	};

	enum class xbd1cea43 : uint64_t {
		File_Name,
		Path,
		Created_By,
		Last_Modified_By,
		Collection,
		Tags,
		Asset_ID, 
	};
} // namespace rivet::ddl::generated

// clang-format on