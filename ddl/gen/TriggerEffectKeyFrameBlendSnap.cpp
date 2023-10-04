// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerEffectKeyFrameBlendSnap.hpp>

namespace rivet::ddl::generated {
	TriggerEffectKeyFrameBlendSnap::TriggerEffectKeyFrameBlendSnap([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): TriggerEffectKeyFrameBlendBase(serialized) {

	}

	[[nodiscard]] auto
	TriggerEffectKeyFrameBlendSnap::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerEffectKeyFrameBlendSnap::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerEffectKeyFrameBlendSnap> {
		if (incoming_type_id == TriggerEffectKeyFrameBlendSnap::type_id) {
			return std::make_shared<TriggerEffectKeyFrameBlendSnap>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
