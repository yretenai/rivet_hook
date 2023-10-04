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
	struct MeleeAttackData;
	struct DamageKnockbackOverrideData; 

	struct RIVET_DDL_SHARED MeleeConfig : ConfigBase {
		constexpr const static std::string_view type_name = "MeleeConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xd3e3c0f8;

		constexpr const static std::string_view StreakConfig_type_name = "StreakConfig";
		constexpr const static rivet::rivet_type_id StreakConfig_type_id = 0xb6282e07;
		constexpr const static std::string_view ThrownOverrideData_type_name = "ThrownOverrideData";
		constexpr const static rivet::rivet_type_id ThrownOverrideData_type_id = 0x637d96c;
		constexpr const static std::string_view MeleeAttackList_type_name = "MeleeAttackList";
		constexpr const static rivet::rivet_type_id MeleeAttackList_type_id = 0x1b9dd2e8; 

		explicit MeleeConfig() = default;
		explicit MeleeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view StreakConfig {};
		std::shared_ptr<rivet::ddl::generated::DamageKnockbackOverrideData> ThrownOverrideData {};
		std::vector<std::shared_ptr<rivet::ddl::generated::MeleeAttackData>> MeleeAttackList {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MeleeConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
