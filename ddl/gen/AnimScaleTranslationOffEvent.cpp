// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimScaleTranslationOffEvent.hpp>

namespace rivet::ddl::generated {
	AnimScaleTranslationOffEvent::AnimScaleTranslationOffEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	AnimScaleTranslationOffEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimScaleTranslationOffEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimScaleTranslationOffEvent> {
		if (incoming_type_id == AnimScaleTranslationOffEvent::type_id) {
			return std::make_shared<AnimScaleTranslationOffEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated