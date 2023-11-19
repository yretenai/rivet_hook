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
	struct RIVET_DDL_SHARED AudioBusMaterialUpdaterPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AudioBusMaterialUpdaterPrius";
		constexpr static rivet::rivet_type_id type_id = 0xc5d62e08;

		constexpr static std::string_view MaterialConstantName_type_name = "MaterialConstantName";
		constexpr static rivet::rivet_type_id MaterialConstantName_type_id = 0xc71d22ab;
		constexpr static std::string_view MaterialMapName_type_name = "MaterialMapName";
		constexpr static rivet::rivet_type_id MaterialMapName_type_id = 0x367545e6;
		constexpr static std::string_view AudioBus_type_name = "AudioBus";
		constexpr static rivet::rivet_type_id AudioBus_type_id = 0xb16a760e;
		constexpr static std::string_view MinBusValue_type_name = "MinBusValue";
		constexpr static rivet::rivet_type_id MinBusValue_type_id = 0x86828bda;
		constexpr static std::string_view MaxBusValue_type_name = "MaxBusValue";
		constexpr static rivet::rivet_type_id MaxBusValue_type_id = 0x4a8ff0d5;
		constexpr static std::string_view RandomBonusValue_type_name = "RandomBonusValue";
		constexpr static rivet::rivet_type_id RandomBonusValue_type_id = 0xb3bcd16c; 

		explicit AudioBusMaterialUpdaterPrius() = default;
		explicit AudioBusMaterialUpdaterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MaterialConstantName {};
		std::string_view MaterialMapName {};
		std::string_view AudioBus {};
		float MinBusValue {};
		float MaxBusValue {};
		float RandomBonusValue {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AudioBusMaterialUpdaterPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on