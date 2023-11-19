// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct WwiseLookupBankDef;
	struct VaultMetaData; 

	struct RIVET_DDL_SHARED WwiseLookupDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "WwiseLookupDef";
		constexpr static rivet::rivet_type_id type_id = 0x91567644;

		constexpr static std::string_view VaultMetaData_type_name = "VaultMetaData";
		constexpr static rivet::rivet_type_id VaultMetaData_type_id = 0x37889aa;
		constexpr static std::string_view IconPath_type_name = "IconPath";
		constexpr static rivet::rivet_type_id IconPath_type_id = 0xbf5b007f;
		constexpr static std::string_view Info_type_name = "Info";
		constexpr static rivet::rivet_type_id Info_type_id = 0xfb19f1e7;
		constexpr static std::string_view Banks_type_name = "Banks";
		constexpr static rivet::rivet_type_id Banks_type_id = 0xb255fb57; 

		explicit WwiseLookupDef() = default;
		explicit WwiseLookupDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::VaultMetaData> VaultMetaData {};
		std::string_view IconPath {};
		std::string_view Info {};
		std::vector<std::shared_ptr<rivet::ddl::generated::WwiseLookupBankDef>> Banks {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WwiseLookupDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on