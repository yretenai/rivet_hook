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

#include <rivet/ddl/generated/GameplayNodeGraphBaseDef.hpp> 

namespace rivet::ddl::generated {
	struct MissionNodeGameDef_Tools;
	struct NotMissionSystemNodeDef_Tools;
	struct AndMissionSystemNodeDef_Tools;
	struct OrMissionSystemNodeDef_Tools;
	struct InitMissionGraphNodeGameDef_Tools; 

	struct RIVET_DDL_SHARED MissionGraphGameDef_Tools : GameplayNodeGraphBaseDef {
		constexpr static std::string_view type_name = "MissionGraphGameDef_Tools";
		constexpr static rivet::rivet_type_id type_id = 0x3ef5bcac;

		constexpr static std::string_view InitNode_type_name = "InitNode";
		constexpr static rivet::rivet_type_id InitNode_type_id = 0xacae6ecb;
		constexpr static std::string_view OrNodes_type_name = "OrNodes";
		constexpr static rivet::rivet_type_id OrNodes_type_id = 0xbd4cf165;
		constexpr static std::string_view AndNodes_type_name = "AndNodes";
		constexpr static rivet::rivet_type_id AndNodes_type_id = 0xd150652d;
		constexpr static std::string_view NotNodes_type_name = "NotNodes";
		constexpr static rivet::rivet_type_id NotNodes_type_id = 0xadd17eae;
		constexpr static std::string_view MissionNodes_type_name = "MissionNodes";
		constexpr static rivet::rivet_type_id MissionNodes_type_id = 0x6b15ce6c; 

		explicit MissionGraphGameDef_Tools() = default;
		explicit MissionGraphGameDef_Tools([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::InitMissionGraphNodeGameDef_Tools> InitNode {};
		std::vector<std::shared_ptr<rivet::ddl::generated::OrMissionSystemNodeDef_Tools>> OrNodes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::AndMissionSystemNodeDef_Tools>> AndNodes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::NotMissionSystemNodeDef_Tools>> NotNodes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::MissionNodeGameDef_Tools>> MissionNodes {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionGraphGameDef_Tools>;
	};
} // namespace rivet::ddl::generated

// clang-format on