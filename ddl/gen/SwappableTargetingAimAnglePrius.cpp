// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetingAimAnglePrius.hpp> 

#include <rivet/ddl/generated/SwappableTargetingAimAnglePrius.hpp>

namespace rivet::ddl::generated {
	SwappableTargetingAimAnglePrius::SwappableTargetingAimAnglePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TargetingAimAnglePrius(serialized) {
		TargetingAimAngleOptions = serialized->unwrap_into_many<rivet::ddl::generated::TargetingAimAnglePrius>(TargetingAimAngleOptions_type_id); 
	}

	[[nodiscard]] auto
	SwappableTargetingAimAnglePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SwappableTargetingAimAnglePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SwappableTargetingAimAnglePrius> {
		if (incoming_type_id == SwappableTargetingAimAnglePrius::type_id) {
			return std::make_shared<SwappableTargetingAimAnglePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
