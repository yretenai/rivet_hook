// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerEffectKeyFrameDataTime.hpp>

namespace rivet::ddl::generated {
	TriggerEffectKeyFrameDataTime::TriggerEffectKeyFrameDataTime([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerEffectKeyFrameDataBase(serialized) {
		Time = serialized->get_float(Time_type_id); 
	}

	[[nodiscard]] auto
	TriggerEffectKeyFrameDataTime::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerEffectKeyFrameDataTime::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerEffectKeyFrameDataTime> {
		if (incoming_type_id == TriggerEffectKeyFrameDataTime::type_id) {
			return std::make_shared<TriggerEffectKeyFrameDataTime>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
