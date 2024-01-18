// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraHeightTweakSet.hpp>

namespace rivet::ddl::generated {
	CameraHeightTweakSet::CameraHeightTweakSet([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): CameraHeightTweak(serialized) {
		Height = serialized->get_float(Height_type_id, 2.250000f);
		BlendFieldCompletePercent = serialized->get_float(BlendFieldCompletePercent_type_id, 0.000000f);
		BiDirectionalField = serialized->get_bool(BiDirectionalField_type_id, false); 
	}

	[[nodiscard]] auto
	CameraHeightTweakSet::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraHeightTweakSet::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraHeightTweakSet> {
		if (incoming_type_id == CameraHeightTweakSet::type_id) {
			return std::make_shared<CameraHeightTweakSet>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
