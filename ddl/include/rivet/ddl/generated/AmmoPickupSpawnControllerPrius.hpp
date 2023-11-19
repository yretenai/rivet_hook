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

#include <rivet/ddl/generated/PickupSpawnControllerPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AmmoPickupSpawnControllerPrius : PickupSpawnControllerPrius {
		constexpr static std::string_view type_name = "AmmoPickupSpawnControllerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x4e6a5e9e;

		constexpr static std::string_view ValidateAmmoNeed_type_name = "ValidateAmmoNeed";
		constexpr static rivet::rivet_type_id ValidateAmmoNeed_type_id = 0x614bca7f; 

		explicit AmmoPickupSpawnControllerPrius() = default;
		explicit AmmoPickupSpawnControllerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool ValidateAmmoNeed {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmmoPickupSpawnControllerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on