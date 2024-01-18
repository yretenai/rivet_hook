// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FloatPlug.hpp>

namespace rivet::ddl::generated {
	FloatPlug::FloatPlug([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Value = serialized->get_float(Value_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	FloatPlug::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FloatPlug::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FloatPlug> {
		if (incoming_type_id == FloatPlug::type_id) {
			return std::make_shared<FloatPlug>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
