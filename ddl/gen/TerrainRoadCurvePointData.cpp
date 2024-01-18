// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TerrainRoadCurvePointData.hpp>

namespace rivet::ddl::generated {
	TerrainRoadCurvePointData::TerrainRoadCurvePointData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		WidthScale = serialized->get_float(WidthScale_type_id, 1.000000f); 
	}

	[[nodiscard]] auto
	TerrainRoadCurvePointData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TerrainRoadCurvePointData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TerrainRoadCurvePointData> {
		if (incoming_type_id == TerrainRoadCurvePointData::type_id) {
			return std::make_shared<TerrainRoadCurvePointData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
