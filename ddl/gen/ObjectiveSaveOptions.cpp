// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ObjectiveSaveOptions.hpp>

namespace rivet::ddl::generated {
	ObjectiveSaveOptions::ObjectiveSaveOptions([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SaveSnapshot = serialized->get_bool(SaveSnapshot_type_id);
		SaveReplaySnapshot = serialized->get_bool(SaveReplaySnapshot_type_id); 
	}

	[[nodiscard]] auto
	ObjectiveSaveOptions::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ObjectiveSaveOptions::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ObjectiveSaveOptions> {
		if (incoming_type_id == ObjectiveSaveOptions::type_id) {
			return std::make_shared<ObjectiveSaveOptions>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated