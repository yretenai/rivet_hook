// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OnLookAtEachActorActionPrius.hpp>

namespace rivet::ddl::generated {
	OnLookAtEachActorActionPrius::OnLookAtEachActorActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		StartActive = serialized->get_bool(StartActive_type_id);
		OnlyFireOnChangeEvent = serialized->get_bool(OnlyFireOnChangeEvent_type_id);
		SignalMax = serialized->get_int32(SignalMax_type_id);
		MaxDistance = serialized->get_float(MaxDistance_type_id);
		StartActorsLookedAt = serialized->get_bool(StartActorsLookedAt_type_id);
		CheckWholeCameraView = serialized->get_bool(CheckWholeCameraView_type_id);
		ShouldBeVisible = serialized->get_bool(ShouldBeVisible_type_id);
		PercentVisible = serialized->get_float(PercentVisible_type_id); 
	}

	[[nodiscard]] auto
	OnLookAtEachActorActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OnLookAtEachActorActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OnLookAtEachActorActionPrius> {
		if (incoming_type_id == OnLookAtEachActorActionPrius::type_id) {
			return std::make_shared<OnLookAtEachActorActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated