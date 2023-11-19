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

#include <rivet/ddl/generated/bitsets/x6c9f6d9b.hpp>
#include <rivet/ddl/generated/BaseCustomOverlayTriggerPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED MissionStatesTriggerPrius : BaseCustomOverlayTriggerPrius {
		constexpr static std::string_view type_name = "MissionStatesTriggerPrius";
		constexpr static rivet::rivet_type_id type_id = 0x56c9caea;

		constexpr static std::string_view MissionName_type_name = "MissionName";
		constexpr static rivet::rivet_type_id MissionName_type_id = 0xa5c30e60;
		constexpr static std::string_view MissionStates_type_name = "MissionStates";
		constexpr static rivet::rivet_type_id MissionStates_type_id = 0x13b9234f;
		constexpr static std::string_view AvailableCoversActiveLoading_type_name = "AvailableCoversActiveLoading";
		constexpr static rivet::rivet_type_id AvailableCoversActiveLoading_type_id = 0x9555ef4c; 

		explicit MissionStatesTriggerPrius() = default;
		explicit MissionStatesTriggerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MissionName {};
		rivet::ddl::generated::x6c9f6d9b MissionStates {};
		bool AvailableCoversActiveLoading {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MissionStatesTriggerPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on