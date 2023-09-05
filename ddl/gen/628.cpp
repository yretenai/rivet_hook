// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraAimContextBlendCustom.hpp>

namespace rivet::ddl::generated {
	CameraAimContextBlendCustom::CameraAimContextBlendCustom([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraAimContextBlend(serialized) {
		Gain = serialized->get_float(Gain_type_id);
		Damp = serialized->get_float(Damp_type_id);
		MaxSpeed = serialized->get_float(MaxSpeed_type_id);
		Priority = serialized->get_enum<rivet::ddl::generated::xd255d55>(Priority_type_id, rivet::ddl::generated::xd255d55_values); 
	}

	auto
	CameraAimContextBlendCustom::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	CameraAimContextBlendCustom::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraAimContextBlendCustom::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraAimContextBlendCustom> {
		if (incoming_type_id == CameraAimContextBlendCustom::type_id) {
			return std::make_shared<CameraAimContextBlendCustom>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated