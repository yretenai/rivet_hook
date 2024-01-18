// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeatStateData.hpp>

namespace rivet::ddl::generated {
	HeatStateData::HeatStateData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HeatState = serialized->get_enum<rivet::ddl::generated::xa6f8b099>(HeatState_type_id, rivet::ddl::generated::xa6f8b099_values, rivet::ddl::generated::xa6f8b099::None);
		TempThreshold = serialized->get_float(TempThreshold_type_id, 0.000000f);
		NumBulletsToSpray = serialized->get_uint32(NumBulletsToSpray_type_id, 1u); 
	}

	[[nodiscard]] auto
	HeatStateData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeatStateData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeatStateData> {
		if (incoming_type_id == HeatStateData::type_id) {
			return std::make_shared<HeatStateData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
