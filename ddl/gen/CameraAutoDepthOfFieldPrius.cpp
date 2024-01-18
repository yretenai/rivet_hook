// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraAutoDepthOfFieldPrius.hpp>

namespace rivet::ddl::generated {
	CameraAutoDepthOfFieldPrius::CameraAutoDepthOfFieldPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id, false);
		NearFocusDistance = serialized->get_float(NearFocusDistance_type_id, 0.000000f);
		NearApertureScale = serialized->get_float(NearApertureScale_type_id, 0.000000f);
		FocusDistance = serialized->get_float(FocusDistance_type_id, 100.000000f);
		ApertureScale = serialized->get_float(ApertureScale_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	CameraAutoDepthOfFieldPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraAutoDepthOfFieldPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraAutoDepthOfFieldPrius> {
		if (incoming_type_id == CameraAutoDepthOfFieldPrius::type_id) {
			return std::make_shared<CameraAutoDepthOfFieldPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
