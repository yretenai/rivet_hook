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

#include <rivet/ddl/generated/enums/x387422ea.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED MeleeWeaponSkinData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "MeleeWeaponSkinData";
		constexpr const static rivet::rivet_type_id type_id = 0x195986a0;

		constexpr const static std::string_view SkinType_type_name = "SkinType";
		constexpr const static rivet::rivet_type_id SkinType_type_id = 0x301c5cc0;
		constexpr const static std::string_view SkinIdValue_type_name = "SkinIdValue";
		constexpr const static rivet::rivet_type_id SkinIdValue_type_id = 0xc55f53ff; 

		explicit MeleeWeaponSkinData() = default;
		explicit MeleeWeaponSkinData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x387422ea SkinType {};
		float SkinIdValue {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MeleeWeaponSkinData>;
	};
} // namespace rivet::ddl::generated

// clang-format on