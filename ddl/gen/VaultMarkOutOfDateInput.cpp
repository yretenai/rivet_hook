// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VaultMarkOutOfDateInput.hpp>

namespace rivet::ddl::generated {
	VaultMarkOutOfDateInput::VaultMarkOutOfDateInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Paths = serialized->get_strings(Paths_type_id); 
	}

	[[nodiscard]] auto
	VaultMarkOutOfDateInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VaultMarkOutOfDateInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultMarkOutOfDateInput> {
		if (incoming_type_id == VaultMarkOutOfDateInput::type_id) {
			return std::make_shared<VaultMarkOutOfDateInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated