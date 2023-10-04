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

#include <rivet/ddl/generated/enums/xd5643d7e.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WeaponImageData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "WeaponImageData";
		constexpr const static rivet::rivet_type_id type_id = 0xc68e3073;

		constexpr const static std::string_view Weapon_type_name = "Weapon";
		constexpr const static rivet::rivet_type_id Weapon_type_id = 0x574be981;
		constexpr const static std::string_view Texture_type_name = "Texture";
		constexpr const static rivet::rivet_type_id Texture_type_id = 0x838c6e4a;
		constexpr const static std::string_view TextureV5_type_name = "TextureV5";
		constexpr const static rivet::rivet_type_id TextureV5_type_id = 0x1ace56ad; 

		explicit WeaponImageData() = default;
		explicit WeaponImageData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xd5643d7e Weapon {};
		std::string_view Texture {};
		std::string_view TextureV5 {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponImageData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
