// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimModRandomOffsetPrius.hpp>

namespace rivet::ddl::generated {
	AimModRandomOffsetPrius::AimModRandomOffsetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimModifierPrius(serialized) {
		VerticalMin = serialized->get_float(VerticalMin_type_id, 0.000000f);
		VerticalMax = serialized->get_float(VerticalMax_type_id, 0.000000f);
		HorizontalMin = serialized->get_float(HorizontalMin_type_id, 0.000000f);
		HorizontalMax = serialized->get_float(HorizontalMax_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	AimModRandomOffsetPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimModRandomOffsetPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModRandomOffsetPrius> {
		if (incoming_type_id == AimModRandomOffsetPrius::type_id) {
			return std::make_shared<AimModRandomOffsetPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
