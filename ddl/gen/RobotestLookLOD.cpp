// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RobotestLookLOD.hpp>

namespace rivet::ddl::generated {
	RobotestLookLOD::RobotestLookLOD([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SubsetRemap = serialized->get_uint16s(SubsetRemap_type_id); 
	}

	[[nodiscard]] auto
	RobotestLookLOD::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RobotestLookLOD::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RobotestLookLOD> {
		if (incoming_type_id == RobotestLookLOD::type_id) {
			return std::make_shared<RobotestLookLOD>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated