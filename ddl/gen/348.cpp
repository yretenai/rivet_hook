// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OffsetReductionGain.hpp>

namespace rivet::ddl::generated {
	OffsetReductionGain::OffsetReductionGain([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OffsetReductionMode(serialized) {
		Gain = serialized->get_float(Gain_type_id);
		Damp = serialized->get_float(Damp_type_id);
		Speed = serialized->get_float(Speed_type_id); 
	}

	auto
	OffsetReductionGain::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	OffsetReductionGain::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OffsetReductionGain::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OffsetReductionGain> {
		if (incoming_type_id == OffsetReductionGain::type_id) {
			return std::make_shared<OffsetReductionGain>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated