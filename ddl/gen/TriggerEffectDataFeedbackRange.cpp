// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerEffectDataFeedbackRange.hpp>

namespace rivet::ddl::generated {
	TriggerEffectDataFeedbackRange::TriggerEffectDataFeedbackRange([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerEffectDataBase(serialized) {

	}

	[[nodiscard]] auto
	TriggerEffectDataFeedbackRange::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerEffectDataFeedbackRange::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerEffectDataFeedbackRange> {
		if (incoming_type_id == TriggerEffectDataFeedbackRange::type_id) {
			return std::make_shared<TriggerEffectDataFeedbackRange>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
