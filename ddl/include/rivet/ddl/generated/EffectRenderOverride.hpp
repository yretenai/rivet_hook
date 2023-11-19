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

#include <rivet/ddl/generated/enums/x39013cd.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3;
	struct DDLVector4; 

	struct RIVET_DDL_SHARED EffectRenderOverride : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "EffectRenderOverride";
		constexpr static rivet::rivet_type_id type_id = 0x2bdf9604;

		constexpr static std::string_view Name_type_name = "Name";
		constexpr static rivet::rivet_type_id Name_type_id = 0x6eb3beb6;
		constexpr static std::string_view Type_type_name = "Type";
		constexpr static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr static std::string_view Constants_type_name = "Constants";
		constexpr static rivet::rivet_type_id Constants_type_id = 0x11306034;
		constexpr static std::string_view Color_type_name = "Color";
		constexpr static rivet::rivet_type_id Color_type_id = 0x7f058428;
		constexpr static std::string_view Texture_type_name = "Texture";
		constexpr static rivet::rivet_type_id Texture_type_id = 0x838c6e4a;
		constexpr static std::string_view LightHandle_type_name = "LightHandle";
		constexpr static rivet::rivet_type_id LightHandle_type_id = 0x95a2ec65; 

		explicit EffectRenderOverride() = default;
		explicit EffectRenderOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Name {};
		rivet::ddl::generated::x39013cd Type {};
		std::shared_ptr<rivet::ddl::generated::DDLVector4> Constants {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Color {};
		std::string_view Texture {};
		uint32_t LightHandle {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EffectRenderOverride>;
	};
} // namespace rivet::ddl::generated

// clang-format on