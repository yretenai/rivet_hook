// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StaggerMeter.hpp>

namespace rivet::ddl::generated {
	StaggerMeter::StaggerMeter([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DebugName = serialized->get_string(DebugName_type_id, {});
		Types = serialized->get_bitset<rivet::ddl::generated::x7f7c56aa>(Types_type_id, rivet::ddl::generated::x7f7c56aa_values, 1u);
		Threshhold = serialized->get_float(Threshhold_type_id, 25.000000f);
		Decay = serialized->get_float(Decay_type_id, 0.000000f);
		DecayDelay = serialized->get_float(DecayDelay_type_id, 0.000000f);
		StartingValue = serialized->get_float(StartingValue_type_id, 0.000000f);
		Cooldown = serialized->get_float(Cooldown_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	StaggerMeter::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StaggerMeter::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StaggerMeter> {
		if (incoming_type_id == StaggerMeter::type_id) {
			return std::make_shared<StaggerMeter>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
