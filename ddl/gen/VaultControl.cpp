// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VaultControl.hpp>

namespace rivet::ddl::generated {
	VaultControl::VaultControl([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		_id = serialized->get_int32(_id_type_id);
		DatabaseVersion = serialized->get_uint32(DatabaseVersion_type_id);
		ValidExtensions = serialized->get_strings(ValidExtensions_type_id); 
	}

	[[nodiscard]] auto
	VaultControl::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VaultControl::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultControl> {
		if (incoming_type_id == VaultControl::type_id) {
			return std::make_shared<VaultControl>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated