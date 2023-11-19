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
	struct SteeringPartnerCurveConfig; 

	struct RIVET_DDL_SHARED SteeringPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SteeringPrius";
		constexpr static rivet::rivet_type_id type_id = 0xfcdc5947;

		constexpr static std::string_view ActorHeight_type_name = "ActorHeight";
		constexpr static rivet::rivet_type_id ActorHeight_type_id = 0xd181b6ea;
		constexpr static std::string_view NavCollRadiusHard_type_name = "NavCollRadiusHard";
		constexpr static rivet::rivet_type_id NavCollRadiusHard_type_id = 0x7bc39ce4;
		constexpr static std::string_view NavCollRadiusSoft_type_name = "NavCollRadiusSoft";
		constexpr static rivet::rivet_type_id NavCollRadiusSoft_type_id = 0xc55ca641;
		constexpr static std::string_view AlwaysUseAccel_type_name = "AlwaysUseAccel";
		constexpr static rivet::rivet_type_id AlwaysUseAccel_type_id = 0xc6e2b259;
		constexpr static std::string_view UseNavPositionTrackerQueries_type_name = "UseNavPositionTrackerQueries";
		constexpr static rivet::rivet_type_id UseNavPositionTrackerQueries_type_id = 0x617c7319;
		constexpr static std::string_view PartnerData_type_name = "PartnerData";
		constexpr static rivet::rivet_type_id PartnerData_type_id = 0xfc34300c; 

		explicit SteeringPrius() = default;
		explicit SteeringPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float ActorHeight {};
		float NavCollRadiusHard {};
		float NavCollRadiusSoft {};
		bool AlwaysUseAccel {};
		bool UseNavPositionTrackerQueries {};
		std::shared_ptr<rivet::ddl::generated::SteeringPartnerCurveConfig> PartnerData {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SteeringPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on