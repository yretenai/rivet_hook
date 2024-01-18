// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WindMinMax.hpp>

namespace rivet::ddl::generated {
	WindMinMax::WindMinMax([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Max = serialized->get_float(Max_type_id, 0.000000f);
		Min = serialized->get_float(Min_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	WindMinMax::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WindMinMax::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WindMinMax> {
		if (incoming_type_id == WindMinMax::type_id) {
			return std::make_shared<WindMinMax>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
