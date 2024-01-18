// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraEngineItem.hpp>

namespace rivet::ddl::generated {
	CameraEngineItem::CameraEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CamLodScale = serialized->get_float(CamLodScale_type_id, 1.000000f);
		NearClipDistance = serialized->get_float(NearClipDistance_type_id, 0.010000f);
		FarClipDistance = serialized->get_float(FarClipDistance_type_id, 10000.000000f);
		FieldOfViewDegrees = serialized->get_float(FieldOfViewDegrees_type_id, 90.000000f);
		Projection = serialized->get_enum<rivet::ddl::generated::CameraProjectionType>(Projection_type_id, rivet::ddl::generated::CameraProjectionType_values, rivet::ddl::generated::CameraProjectionType::Perspective); 
	}

	[[nodiscard]] auto
	CameraEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraEngineItem> {
		if (incoming_type_id == CameraEngineItem::type_id) {
			return std::make_shared<CameraEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
