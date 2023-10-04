// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VolumeTargetingPrius.hpp> 

#include <rivet/ddl/generated/DistanceTargetingPrius.hpp>

namespace rivet::ddl::generated {
	DistanceTargetingPrius::DistanceTargetingPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TargetingBasePrius(serialized) {
		ValidTargetTypes = serialized->get_bitset<rivet::ddl::generated::TargetType>(ValidTargetTypes_type_id, rivet::ddl::generated::TargetType_values); 
	}

	[[nodiscard]] auto
	DistanceTargetingPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DistanceTargetingPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DistanceTargetingPrius> {
		if (incoming_type_id == DistanceTargetingPrius::type_id) {
			return std::make_shared<DistanceTargetingPrius>(serialized);
		}

		auto VolumeTargetingPrius_ptr = VolumeTargetingPrius::from_substruct(incoming_type_id, serialized);
		if (VolumeTargetingPrius_ptr != nullptr) {
			return VolumeTargetingPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
