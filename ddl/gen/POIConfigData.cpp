// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/POIGameConfigData.hpp>
#include <rivet/ddl/generated/POIAttributeIconBase.hpp>
#include <rivet/ddl/generated/POIAttributeEdgeModeBase.hpp>
#include <rivet/ddl/generated/POIAttributeDistanceScaleBase.hpp>
#include <rivet/ddl/generated/POIAttributeDistanceTextBase.hpp> 

#include <rivet/ddl/generated/POIConfigData.hpp>

namespace rivet::ddl::generated {
	POIConfigData::POIConfigData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CoherentPOI = serialized->get_bool(CoherentPOI_type_id);
		Icon = serialized->unwrap_into<rivet::ddl::generated::POIAttributeIconBase>(Icon_type_id);
		Priority = serialized->get_enum<rivet::ddl::generated::xfb0b3aad>(Priority_type_id, rivet::ddl::generated::xfb0b3aad_values);
		EdgeMode = serialized->unwrap_into<rivet::ddl::generated::POIAttributeEdgeModeBase>(EdgeMode_type_id);
		OffscreenIndicator = serialized->get_bool(OffscreenIndicator_type_id);
		DistanceScaleMode = serialized->unwrap_into<rivet::ddl::generated::POIAttributeDistanceScaleBase>(DistanceScaleMode_type_id);
		DistanceText = serialized->get_bool(DistanceText_type_id);
		DistanceTextMode = serialized->unwrap_into<rivet::ddl::generated::POIAttributeDistanceTextBase>(DistanceTextMode_type_id); 
	}

	[[nodiscard]] auto
	POIConfigData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	POIConfigData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<POIConfigData> {
		if (incoming_type_id == POIConfigData::type_id) {
			return std::make_shared<POIConfigData>(serialized);
		}

		auto POIGameConfigData_ptr = POIGameConfigData::from_substruct(incoming_type_id, serialized);
		if (POIGameConfigData_ptr != nullptr) {
			return POIGameConfigData_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated