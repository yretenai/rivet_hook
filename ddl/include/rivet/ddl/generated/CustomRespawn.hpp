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
	struct PropAssetElement; 

	struct RIVET_DDL_SHARED CustomRespawn : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "CustomRespawn";
		constexpr const static rivet::rivet_type_id type_id = 0xd5d450e1;

		constexpr const static std::string_view FrequencyWeight_type_name = "FrequencyWeight";
		constexpr const static rivet::rivet_type_id FrequencyWeight_type_id = 0xa9e33982;
		constexpr const static std::string_view AnimDriverName_type_name = "AnimDriverName";
		constexpr const static rivet::rivet_type_id AnimDriverName_type_id = 0x45f98c1e;
		constexpr const static std::string_view PropAssets_type_name = "PropAssets";
		constexpr const static rivet::rivet_type_id PropAssets_type_id = 0x3abce3a3;
		constexpr const static std::string_view UseCameraAnimation_type_name = "UseCameraAnimation";
		constexpr const static rivet::rivet_type_id UseCameraAnimation_type_id = 0xdc481867; 

		explicit CustomRespawn() = default;
		explicit CustomRespawn([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float FrequencyWeight {};
		std::string_view AnimDriverName {};
		std::vector<std::shared_ptr<rivet::ddl::generated::PropAssetElement>> PropAssets {};
		bool UseCameraAnimation {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CustomRespawn>;
	};
} // namespace rivet::ddl::generated

// clang-format on