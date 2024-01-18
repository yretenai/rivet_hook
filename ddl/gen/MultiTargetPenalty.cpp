// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MultiTargetPenalty.hpp>

namespace rivet::ddl::generated {
	MultiTargetPenalty::MultiTargetPenalty([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NumTargeters = serialized->get_float(NumTargeters_type_id, 0.000000f);
		Penalty = serialized->get_float(Penalty_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	MultiTargetPenalty::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MultiTargetPenalty::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MultiTargetPenalty> {
		if (incoming_type_id == MultiTargetPenalty::type_id) {
			return std::make_shared<MultiTargetPenalty>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
