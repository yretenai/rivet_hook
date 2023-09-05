// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimAssistSnapLocationTargetLocation.hpp>

namespace rivet::ddl::generated {
	AimAssistSnapLocationTargetLocation::AimAssistSnapLocationTargetLocation([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimAssistSnapLocation(serialized) {
		TargetIndex = serialized->get_uint8(TargetIndex_type_id); 
	}

	auto
	AimAssistSnapLocationTargetLocation::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	AimAssistSnapLocationTargetLocation::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimAssistSnapLocationTargetLocation::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistSnapLocationTargetLocation> {
		if (incoming_type_id == AimAssistSnapLocationTargetLocation::type_id) {
			return std::make_shared<AimAssistSnapLocationTargetLocation>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated