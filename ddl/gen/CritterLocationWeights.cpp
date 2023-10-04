// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CritterLocationWeights.hpp>

namespace rivet::ddl::generated {
	CritterLocationWeights::CritterLocationWeights([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DistanceFactor = serialized->get_float(DistanceFactor_type_id);
		AngleFactor = serialized->get_float(AngleFactor_type_id);
		VisibleFactor = serialized->get_float(VisibleFactor_type_id);
		ActiveBias = serialized->get_float(ActiveBias_type_id); 
	}

	[[nodiscard]] auto
	CritterLocationWeights::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CritterLocationWeights::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CritterLocationWeights> {
		if (incoming_type_id == CritterLocationWeights::type_id) {
			return std::make_shared<CritterLocationWeights>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
