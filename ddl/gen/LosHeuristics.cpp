// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LosHeuristics.hpp>

namespace rivet::ddl::generated {
	LosHeuristics::LosHeuristics([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Weight = serialized->get_float(Weight_type_id);
		VisibleTimeMax = serialized->get_float(VisibleTimeMax_type_id);
		HiddenTimeMax = serialized->get_float(HiddenTimeMax_type_id); 
	}

	[[nodiscard]] auto
	LosHeuristics::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LosHeuristics::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LosHeuristics> {
		if (incoming_type_id == LosHeuristics::type_id) {
			return std::make_shared<LosHeuristics>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
