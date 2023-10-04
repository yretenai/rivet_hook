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
	struct LightingConditionBitSet; 

	struct RIVET_DDL_SHARED FarmExtraTileZoneData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "FarmExtraTileZoneData";
		constexpr const static rivet::rivet_type_id type_id = 0x71eb2382;

		constexpr const static std::string_view TileName_type_name = "TileName";
		constexpr const static rivet::rivet_type_id TileName_type_id = 0x58a6cd7d;
		constexpr const static std::string_view Zones_type_name = "Zones";
		constexpr const static rivet::rivet_type_id Zones_type_id = 0x9c997da9;
		constexpr const static std::string_view LightingConditions_type_name = "LightingConditions";
		constexpr const static rivet::rivet_type_id LightingConditions_type_id = 0xfda14c35; 

		explicit FarmExtraTileZoneData() = default;
		explicit FarmExtraTileZoneData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view TileName {};
		std::vector<std::string_view> Zones {};
		std::shared_ptr<rivet::ddl::generated::LightingConditionBitSet> LightingConditions {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FarmExtraTileZoneData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
