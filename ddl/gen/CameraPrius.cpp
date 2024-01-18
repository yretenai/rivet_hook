// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MapCameraPrius.hpp>
#include <rivet/ddl/generated/SplineCameraFlyPrius.hpp>
#include <rivet/ddl/generated/DualSplineCameraProximityPrius.hpp>
#include <rivet/ddl/generated/CameraFPSPrius.hpp>
#include <rivet/ddl/generated/PlacedCameraPrius.hpp>
#include <rivet/ddl/generated/GameCameraPrius.hpp>
#include <rivet/ddl/generated/RelativeAnimCameraPrius.hpp>
#include <rivet/ddl/generated/PhotomodeCameraBasePrius.hpp>
#include <rivet/ddl/generated/CameraToolBasePrius.hpp>
#include <rivet/ddl/generated/CameraToolMayaPrius.hpp>
#include <rivet/ddl/generated/SplineCameraProximityPrius.hpp>
#include <rivet/ddl/generated/DualSplineCameraFlyPrius.hpp> 

#include <rivet/ddl/generated/CameraPrius.hpp>

namespace rivet::ddl::generated {
	CameraPrius::CameraPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HorizontalFOV = serialized->get_float(HorizontalFOV_type_id, 65.000000f);
		NearClip = serialized->get_float(NearClip_type_id, 0.100000f);
		FarClip = serialized->get_float(FarClip_type_id, 1000.000000f);
		HorizontalLength = serialized->get_float(HorizontalLength_type_id, 64.000000f); 
	}

	[[nodiscard]] auto
	CameraPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraPrius> {
		if (incoming_type_id == CameraPrius::type_id) {
			return std::make_shared<CameraPrius>(serialized);
		}

		auto DualSplineCameraFlyPrius_ptr = DualSplineCameraFlyPrius::from_substruct(incoming_type_id, serialized);
		if (DualSplineCameraFlyPrius_ptr != nullptr) {
			return DualSplineCameraFlyPrius_ptr;
		}

		auto SplineCameraProximityPrius_ptr = SplineCameraProximityPrius::from_substruct(incoming_type_id, serialized);
		if (SplineCameraProximityPrius_ptr != nullptr) {
			return SplineCameraProximityPrius_ptr;
		}

		auto RelativeAnimCameraPrius_ptr = RelativeAnimCameraPrius::from_substruct(incoming_type_id, serialized);
		if (RelativeAnimCameraPrius_ptr != nullptr) {
			return RelativeAnimCameraPrius_ptr;
		}

		auto CameraToolMayaPrius_ptr = CameraToolMayaPrius::from_substruct(incoming_type_id, serialized);
		if (CameraToolMayaPrius_ptr != nullptr) {
			return CameraToolMayaPrius_ptr;
		}

		auto CameraToolBasePrius_ptr = CameraToolBasePrius::from_substruct(incoming_type_id, serialized);
		if (CameraToolBasePrius_ptr != nullptr) {
			return CameraToolBasePrius_ptr;
		}

		auto PhotomodeCameraBasePrius_ptr = PhotomodeCameraBasePrius::from_substruct(incoming_type_id, serialized);
		if (PhotomodeCameraBasePrius_ptr != nullptr) {
			return PhotomodeCameraBasePrius_ptr;
		}

		auto CameraFPSPrius_ptr = CameraFPSPrius::from_substruct(incoming_type_id, serialized);
		if (CameraFPSPrius_ptr != nullptr) {
			return CameraFPSPrius_ptr;
		}

		auto DualSplineCameraProximityPrius_ptr = DualSplineCameraProximityPrius::from_substruct(incoming_type_id, serialized);
		if (DualSplineCameraProximityPrius_ptr != nullptr) {
			return DualSplineCameraProximityPrius_ptr;
		}

		auto SplineCameraFlyPrius_ptr = SplineCameraFlyPrius::from_substruct(incoming_type_id, serialized);
		if (SplineCameraFlyPrius_ptr != nullptr) {
			return SplineCameraFlyPrius_ptr;
		}

		auto GameCameraPrius_ptr = GameCameraPrius::from_substruct(incoming_type_id, serialized);
		if (GameCameraPrius_ptr != nullptr) {
			return GameCameraPrius_ptr;
		}

		auto MapCameraPrius_ptr = MapCameraPrius::from_substruct(incoming_type_id, serialized);
		if (MapCameraPrius_ptr != nullptr) {
			return MapCameraPrius_ptr;
		}

		auto PlacedCameraPrius_ptr = PlacedCameraPrius::from_substruct(incoming_type_id, serialized);
		if (PlacedCameraPrius_ptr != nullptr) {
			return PlacedCameraPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
