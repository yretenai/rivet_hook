// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CVCShapeConfig.hpp>

namespace rivet::ddl::generated {
	CVCShapeConfig::CVCShapeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Radius = serialized->get_float(Radius_type_id, 0.350000f);
		HeightUp = serialized->get_float(HeightUp_type_id, 2.000000f);
		HeightDown = serialized->get_float(HeightDown_type_id, 0.100000f); 
	}

	[[nodiscard]] auto
	CVCShapeConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CVCShapeConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CVCShapeConfig> {
		if (incoming_type_id == CVCShapeConfig::type_id) {
			return std::make_shared<CVCShapeConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
