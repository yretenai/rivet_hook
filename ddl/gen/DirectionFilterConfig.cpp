// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DirectionFilterConfig.hpp>

namespace rivet::ddl::generated {
	DirectionFilterConfig::DirectionFilterConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DriverName = serialized->get_string(DriverName_type_id, "React_Knockback");
		IndexCount = serialized->get_uint8(IndexCount_type_id, 3u);
		Front = serialized->get_bool(Front_type_id, true);
		Back = serialized->get_bool(Back_type_id, false);
		Left = serialized->get_bool(Left_type_id, false);
		Right = serialized->get_bool(Right_type_id, false); 
	}

	[[nodiscard]] auto
	DirectionFilterConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DirectionFilterConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DirectionFilterConfig> {
		if (incoming_type_id == DirectionFilterConfig::type_id) {
			return std::make_shared<DirectionFilterConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
