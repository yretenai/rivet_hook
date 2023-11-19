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

#include <rivet/ddl/generated/enums/xad01e8be.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED BreakableBusterPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "BreakableBusterPrius";
		constexpr static rivet::rivet_type_id type_id = 0x22aa694a;

		constexpr static std::string_view Locator_type_name = "Locator";
		constexpr static rivet::rivet_type_id Locator_type_id = 0x7bac1d57;
		constexpr static std::string_view LocalOffset_type_name = "LocalOffset";
		constexpr static rivet::rivet_type_id LocalOffset_type_id = 0x46a4eea5;
		constexpr static std::string_view Radius_type_name = "Radius";
		constexpr static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr static std::string_view SpeedThreshold_type_name = "SpeedThreshold";
		constexpr static rivet::rivet_type_id SpeedThreshold_type_id = 0x69e55b8a;
		constexpr static std::string_view DamagePerSpeed_type_name = "DamagePerSpeed";
		constexpr static rivet::rivet_type_id DamagePerSpeed_type_id = 0x5186ed7;
		constexpr static std::string_view DamageHash_type_name = "DamageHash";
		constexpr static rivet::rivet_type_id DamageHash_type_id = 0xd96a20dc;
		constexpr static std::string_view ActorType_type_name = "ActorType";
		constexpr static rivet::rivet_type_id ActorType_type_id = 0x1eb7640e;
		constexpr static std::string_view RequireEngaged_type_name = "RequireEngaged";
		constexpr static rivet::rivet_type_id RequireEngaged_type_id = 0x53802713;
		constexpr static std::string_view DamageInXZPlane_type_name = "DamageInXZPlane";
		constexpr static rivet::rivet_type_id DamageInXZPlane_type_id = 0x758e3570; 

		explicit BreakableBusterPrius() = default;
		explicit BreakableBusterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Locator {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> LocalOffset {};
		float Radius {};
		float SpeedThreshold {};
		float DamagePerSpeed {};
		std::string_view DamageHash {};
		rivet::ddl::generated::xad01e8be ActorType {};
		bool RequireEngaged {};
		bool DamageInXZPlane {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BreakableBusterPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on