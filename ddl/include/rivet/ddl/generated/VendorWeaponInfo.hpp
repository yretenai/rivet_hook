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
	struct VendorWeaponStat; 

	struct RIVET_DDL_SHARED VendorWeaponInfo : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "VendorWeaponInfo";
		constexpr const static rivet::rivet_type_id type_id = 0xd33ff28;

		constexpr const static std::string_view Class_type_name = "Class";
		constexpr const static rivet::rivet_type_id Class_type_id = 0xf418d55e;
		constexpr const static std::string_view Special_type_name = "Special";
		constexpr const static rivet::rivet_type_id Special_type_id = 0x4d815cdb;
		constexpr const static std::string_view Stats_type_name = "Stats";
		constexpr const static rivet::rivet_type_id Stats_type_id = 0x4e14ab6b;
		constexpr const static std::string_view CustomStatName_type_name = "CustomStatName";
		constexpr const static rivet::rivet_type_id CustomStatName_type_id = 0x974a32b4; 

		explicit VendorWeaponInfo() = default;
		explicit VendorWeaponInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Class {};
		std::string_view Special {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VendorWeaponStat>> Stats {};
		std::string_view CustomStatName {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VendorWeaponInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on