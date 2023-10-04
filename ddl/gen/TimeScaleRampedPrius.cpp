// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TimeScaleRampedPrius.hpp>

namespace rivet::ddl::generated {
	TimeScaleRampedPrius::TimeScaleRampedPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TimeScaleBasePrius(serialized) {

	}

	[[nodiscard]] auto
	TimeScaleRampedPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TimeScaleRampedPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TimeScaleRampedPrius> {
		if (incoming_type_id == TimeScaleRampedPrius::type_id) {
			return std::make_shared<TimeScaleRampedPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
