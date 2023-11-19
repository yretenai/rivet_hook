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
	struct RobotestCineActorDriverInfo;
	struct DDLTransform; 

	struct RIVET_DDL_SHARED RobotestCineFrameActorInfo : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "RobotestCineFrameActorInfo";
		constexpr static rivet::rivet_type_id type_id = 0x3d9f12ea;

		constexpr static std::string_view Tuid_type_name = "Tuid";
		constexpr static rivet::rivet_type_id Tuid_type_id = 0x5953f773;
		constexpr static std::string_view ActorName_type_name = "ActorName";
		constexpr static rivet::rivet_type_id ActorName_type_id = 0xcc4a4d21;
		constexpr static std::string_view ActorStatus_type_name = "ActorStatus";
		constexpr static rivet::rivet_type_id ActorStatus_type_id = 0x5fcc36f9;
		constexpr static std::string_view Transform_type_name = "Transform";
		constexpr static rivet::rivet_type_id Transform_type_id = 0xf54f1ea1;
		constexpr static std::string_view Drivers_type_name = "Drivers";
		constexpr static rivet::rivet_type_id Drivers_type_id = 0xe5faa03f; 

		explicit RobotestCineFrameActorInfo() = default;
		explicit RobotestCineFrameActorInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint64_t Tuid {};
		std::string_view ActorName {};
		std::string_view ActorStatus {};
		std::shared_ptr<rivet::ddl::generated::DDLTransform> Transform {};
		std::vector<std::shared_ptr<rivet::ddl::generated::RobotestCineActorDriverInfo>> Drivers {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RobotestCineFrameActorInfo>;
	};
} // namespace rivet::ddl::generated

// clang-format on