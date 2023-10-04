// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UIOptionTypeKeyBinding.hpp>

namespace rivet::ddl::generated {
	UIOptionTypeKeyBinding::UIOptionTypeKeyBinding([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): UIOptionTypeSettingBase(serialized) {
		ActionName = serialized->get_string(ActionName_type_id);
		PrimaryLocked = serialized->get_bool(PrimaryLocked_type_id); 
	}

	[[nodiscard]] auto
	UIOptionTypeKeyBinding::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UIOptionTypeKeyBinding::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionTypeKeyBinding> {
		if (incoming_type_id == UIOptionTypeKeyBinding::type_id) {
			return std::make_shared<UIOptionTypeKeyBinding>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
