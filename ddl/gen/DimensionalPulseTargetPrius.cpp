// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PulseNavObstruction.hpp>
#include <rivet/ddl/generated/DimensionalPulseTargetSwapPrius.hpp>
#include <rivet/ddl/generated/DimensionalPulseTargetPortalPrius.hpp> 

#include <rivet/ddl/generated/DimensionalPulseTargetPrius.hpp>

namespace rivet::ddl::generated {
	DimensionalPulseTargetPrius::DimensionalPulseTargetPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DimensionalPulseTargetBasePrius(serialized) {
		PreCompositeShader = serialized->get_string(PreCompositeShader_type_id);
		PostCompositeShader = serialized->get_string(PostCompositeShader_type_id);
		ReactDriver = serialized->get_string(ReactDriver_type_id);
		NavObstruction = serialized->unwrap_into<rivet::ddl::generated::PulseNavObstruction>(NavObstruction_type_id); 
	}

	[[nodiscard]] auto
	DimensionalPulseTargetPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DimensionalPulseTargetPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DimensionalPulseTargetPrius> {
		if (incoming_type_id == DimensionalPulseTargetPrius::type_id) {
			return std::make_shared<DimensionalPulseTargetPrius>(serialized);
		}

		auto DimensionalPulseTargetSwapPrius_ptr = DimensionalPulseTargetSwapPrius::from_substruct(incoming_type_id, serialized);
		if (DimensionalPulseTargetSwapPrius_ptr != nullptr) {
			return DimensionalPulseTargetSwapPrius_ptr;
		}

		auto DimensionalPulseTargetPortalPrius_ptr = DimensionalPulseTargetPortalPrius::from_substruct(incoming_type_id, serialized);
		if (DimensionalPulseTargetPortalPrius_ptr != nullptr) {
			return DimensionalPulseTargetPortalPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
