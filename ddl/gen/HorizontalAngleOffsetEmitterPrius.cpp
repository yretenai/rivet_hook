// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HorizontalAngleOffsetEmitterPrius.hpp>

namespace rivet::ddl::generated {
	HorizontalAngleOffsetEmitterPrius::HorizontalAngleOffsetEmitterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): LocalOffsetEmitterPrius(serialized) {
		OffsetDegrees = serialized->get_float(OffsetDegrees_type_id); 
	}

	[[nodiscard]] auto
	HorizontalAngleOffsetEmitterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HorizontalAngleOffsetEmitterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HorizontalAngleOffsetEmitterPrius> {
		if (incoming_type_id == HorizontalAngleOffsetEmitterPrius::type_id) {
			return std::make_shared<HorizontalAngleOffsetEmitterPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated