// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraShakingAxisData.hpp> 

#include <rivet/ddl/generated/CameraShakingData.hpp>

namespace rivet::ddl::generated {
	CameraShakingData::CameraShakingData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FadeinDuration = serialized->get_float(FadeinDuration_type_id);
		Duration = serialized->get_float(Duration_type_id);
		FadeoutDuration = serialized->get_float(FadeoutDuration_type_id);
		UseRandomBaseOffset = serialized->get_bool(UseRandomBaseOffset_type_id);
		OverrideViewportBlocking = serialized->get_bool(OverrideViewportBlocking_type_id);
		FilterType = serialized->get_enum<rivet::ddl::generated::x82d89fa6>(FilterType_type_id, rivet::ddl::generated::x82d89fa6_values);
		CurveDataX = serialized->unwrap_into<rivet::ddl::generated::CameraShakingAxisData>(CurveDataX_type_id);
		CurveDataY = serialized->unwrap_into<rivet::ddl::generated::CameraShakingAxisData>(CurveDataY_type_id);
		CurveDataZ = serialized->unwrap_into<rivet::ddl::generated::CameraShakingAxisData>(CurveDataZ_type_id); 
	}

	auto
	CameraShakingData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	CameraShakingData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraShakingData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraShakingData> {
		if (incoming_type_id == CameraShakingData::type_id) {
			return std::make_shared<CameraShakingData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated