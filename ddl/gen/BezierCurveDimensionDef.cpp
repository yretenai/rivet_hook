// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BezierCurveKeyDef.hpp> 

#include <rivet/ddl/generated/BezierCurveDimensionDef.hpp>

namespace rivet::ddl::generated {
	BezierCurveDimensionDef::BezierCurveDimensionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Keys = serialized->unwrap_into_many<rivet::ddl::generated::BezierCurveKeyDef>(Keys_type_id); 
	}

	[[nodiscard]] auto
	BezierCurveDimensionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BezierCurveDimensionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BezierCurveDimensionDef> {
		if (incoming_type_id == BezierCurveDimensionDef::type_id) {
			return std::make_shared<BezierCurveDimensionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
