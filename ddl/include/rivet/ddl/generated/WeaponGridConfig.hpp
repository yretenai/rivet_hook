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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector2;
	struct GridLayerData; 

	struct RIVET_DDL_SHARED WeaponGridConfig : ConfigBase {
		constexpr const static std::string_view type_name = "WeaponGridConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x7d5df308;

		constexpr const static std::string_view Layers_type_name = "Layers";
		constexpr const static rivet::rivet_type_id Layers_type_id = 0xd8f0a337;
		constexpr const static std::string_view TransformScale_type_name = "TransformScale";
		constexpr const static rivet::rivet_type_id TransformScale_type_id = 0x429b412;
		constexpr const static std::string_view TransformOffset_type_name = "TransformOffset";
		constexpr const static rivet::rivet_type_id TransformOffset_type_id = 0x928c7cbd; 

		explicit WeaponGridConfig() = default;
		explicit WeaponGridConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::GridLayerData>> Layers {};
		float TransformScale {};
		std::shared_ptr<rivet::ddl::generated::DDLVector2> TransformOffset {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponGridConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
