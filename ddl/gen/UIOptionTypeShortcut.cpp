// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIOptionTypeShortcut.hpp>

namespace rivet::ddl::generated {
	UIOptionTypeShortcut::UIOptionTypeShortcut([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UIOptionTypeSettingBase(serialized) {

	}

	[[nodiscard]] auto
	UIOptionTypeShortcut::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIOptionTypeShortcut::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionTypeShortcut> {
		if (incoming_type_id == UIOptionTypeShortcut::type_id) {
			return std::make_shared<UIOptionTypeShortcut>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated