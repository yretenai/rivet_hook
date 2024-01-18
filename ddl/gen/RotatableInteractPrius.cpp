// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RotatableInteractPrius.hpp>

namespace rivet::ddl::generated {
	RotatableInteractPrius::RotatableInteractPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SlottedInteractObjectPrius(serialized) {
		RotationSteps = serialized->get_uint32(RotationSteps_type_id, 255u); 
	}

	[[nodiscard]] auto
	RotatableInteractPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RotatableInteractPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RotatableInteractPrius> {
		if (incoming_type_id == RotatableInteractPrius::type_id) {
			return std::make_shared<RotatableInteractPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
