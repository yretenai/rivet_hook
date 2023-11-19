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
	struct RIVET_DDL_SHARED SceneObjectCollectorPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SceneObjectCollectorPrius";
		constexpr static rivet::rivet_type_id type_id = 0x401810d6;

		constexpr static std::string_view EncompassingVolume_type_name = "EncompassingVolume";
		constexpr static rivet::rivet_type_id EncompassingVolume_type_id = 0xcc46eeea;
		constexpr static std::string_view MaxModels_type_name = "MaxModels";
		constexpr static rivet::rivet_type_id MaxModels_type_id = 0x58a647a4;
		constexpr static std::string_view MaxLights_type_name = "MaxLights";
		constexpr static rivet::rivet_type_id MaxLights_type_id = 0x84ccc545;
		constexpr static std::string_view MaxVolumes_type_name = "MaxVolumes";
		constexpr static rivet::rivet_type_id MaxVolumes_type_id = 0x5eaba;
		constexpr static std::string_view MaxDecals_type_name = "MaxDecals";
		constexpr static rivet::rivet_type_id MaxDecals_type_id = 0xafc79ea8;
		constexpr static std::string_view MaxCurves_type_name = "MaxCurves";
		constexpr static rivet::rivet_type_id MaxCurves_type_id = 0xf22c07d4;
		constexpr static std::string_view MaxVisualEffects_type_name = "MaxVisualEffects";
		constexpr static rivet::rivet_type_id MaxVisualEffects_type_id = 0x2f97273;
		constexpr static std::string_view IncludeEnvProbes_type_name = "IncludeEnvProbes";
		constexpr static rivet::rivet_type_id IncludeEnvProbes_type_id = 0x41cb9690;
		constexpr static std::string_view ExcludeCollectors_type_name = "ExcludeCollectors";
		constexpr static rivet::rivet_type_id ExcludeCollectors_type_id = 0x3beca248;
		constexpr static std::string_view IncludeZones_type_name = "IncludeZones";
		constexpr static rivet::rivet_type_id IncludeZones_type_id = 0xcedcd811; 

		explicit SceneObjectCollectorPrius() = default;
		explicit SceneObjectCollectorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t EncompassingVolume {};
		uint32_t MaxModels {};
		uint32_t MaxLights {};
		uint32_t MaxVolumes {};
		uint32_t MaxDecals {};
		uint32_t MaxCurves {};
		uint32_t MaxVisualEffects {};
		bool IncludeEnvProbes {};
		std::vector<uint64_t> ExcludeCollectors {};
		std::vector<std::string_view> IncludeZones {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneObjectCollectorPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on