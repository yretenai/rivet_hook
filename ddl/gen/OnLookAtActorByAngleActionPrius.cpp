// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnLookAtActorByAngleActionPrius.hpp>

namespace rivet::ddl::generated {
	OnLookAtActorByAngleActionPrius::OnLookAtActorByAngleActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values, rivet::ddl::generated::x10228b34::Camera);
		StartActive = serialized->get_bool(StartActive_type_id, true);
		SignalMax = serialized->get_int32(SignalMax_type_id, 1u);
		MaxDistance = serialized->get_float(MaxDistance_type_id, 1000.000000f);
		ShouldBeVisible = serialized->get_bool(ShouldBeVisible_type_id, true);
		PercentVisible = serialized->get_float(PercentVisible_type_id, 0.500000f); 
	}

	[[nodiscard]] auto
	OnLookAtActorByAngleActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OnLookAtActorByAngleActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnLookAtActorByAngleActionPrius> {
		if (incoming_type_id == OnLookAtActorByAngleActionPrius::type_id) {
			return std::make_shared<OnLookAtActorByAngleActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
