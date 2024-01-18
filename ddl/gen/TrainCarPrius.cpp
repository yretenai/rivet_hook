// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TrainCarPrius.hpp>

namespace rivet::ddl::generated {
	TrainCarPrius::TrainCarPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InitiallyEnabled = serialized->get_bool(InitiallyEnabled_type_id, true);
		MaxPositionHistoryPoints = serialized->get_uint32(MaxPositionHistoryPoints_type_id, 128u);
		RearAxleOffset = serialized->get_float(RearAxleOffset_type_id, 5.000000f);
		AdditionalTolerance = serialized->get_float(AdditionalTolerance_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	TrainCarPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TrainCarPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TrainCarPrius> {
		if (incoming_type_id == TrainCarPrius::type_id) {
			return std::make_shared<TrainCarPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
