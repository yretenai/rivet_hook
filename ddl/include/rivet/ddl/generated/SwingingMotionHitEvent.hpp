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

#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SwingingMotionHitEvent : EventBase {
		constexpr static std::string_view type_name = "SwingingMotionHitEvent";
		constexpr static rivet::rivet_type_id type_id = 0xc38c6971;

		constexpr static std::string_view ImpactSpeed_type_name = "ImpactSpeed";
		constexpr static rivet::rivet_type_id ImpactSpeed_type_id = 0x27119bfa;
		constexpr static std::string_view OwnerIsHero_type_name = "OwnerIsHero";
		constexpr static rivet::rivet_type_id OwnerIsHero_type_id = 0x22f6dc; 

		explicit SwingingMotionHitEvent() = default;
		explicit SwingingMotionHitEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ImpactSpeed {};
		bool OwnerIsHero {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SwingingMotionHitEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on