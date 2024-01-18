// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EnvelopeDef.hpp>

namespace rivet::ddl::generated {
	EnvelopeDef::EnvelopeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CanAddOrRemovePoints = serialized->get_bool(CanAddOrRemovePoints_type_id, false);
		MinX = serialized->get_float(MinX_type_id, -1000000.000000f);
		MinY = serialized->get_float(MinY_type_id, -1000000.000000f);
		MaxX = serialized->get_float(MaxX_type_id, 1000000.000000f);
		MaxY = serialized->get_float(MaxY_type_id, 1000000.000000f);
		VisibleMinX = serialized->get_float(VisibleMinX_type_id, -1000000.000000f);
		VisibleMinY = serialized->get_float(VisibleMinY_type_id, -1000000.000000f);
		VisibleMaxX = serialized->get_float(VisibleMaxX_type_id, 1000000.000000f);
		VisibleMaxY = serialized->get_float(VisibleMaxY_type_id, 1000000.000000f); 
	}

	[[nodiscard]] auto
	EnvelopeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EnvelopeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnvelopeDef> {
		if (incoming_type_id == EnvelopeDef::type_id) {
			return std::make_shared<EnvelopeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
