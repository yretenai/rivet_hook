// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Burst.hpp> 

#include <rivet/ddl/generated/SubBurst.hpp>

namespace rivet::ddl::generated {
	SubBurst::SubBurst([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PauseDurationMin = serialized->get_float(PauseDurationMin_type_id, 0.300000f);
		PauseDurationMax = serialized->get_float(PauseDurationMax_type_id, 0.500000f);
		PauseDuration = serialized->get_float(PauseDuration_type_id, 0.000000f);
		Burst = serialized->unwrap_into<rivet::ddl::generated::Burst>(Burst_type_id); 
	}

	[[nodiscard]] auto
	SubBurst::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SubBurst::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SubBurst> {
		if (incoming_type_id == SubBurst::type_id) {
			return std::make_shared<SubBurst>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
