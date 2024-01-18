// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OffsetSplineData.hpp>

namespace rivet::ddl::generated {
	OffsetSplineData::OffsetSplineData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		OffsetSpline = serialized->get_uint64(OffsetSpline_type_id, 0ull);
		OffsetAccel = serialized->get_float(OffsetAccel_type_id, 10.000000f);
		OffsetDecel = serialized->get_float(OffsetDecel_type_id, 5.000000f);
		OffsetSpeed = serialized->get_float(OffsetSpeed_type_id, 5.000000f); 
	}

	[[nodiscard]] auto
	OffsetSplineData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OffsetSplineData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OffsetSplineData> {
		if (incoming_type_id == OffsetSplineData::type_id) {
			return std::make_shared<OffsetSplineData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
