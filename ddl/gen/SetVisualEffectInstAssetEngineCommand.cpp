// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetVisualEffectInstAssetEngineCommand.hpp>

namespace rivet::ddl::generated {
	SetVisualEffectInstAssetEngineCommand::SetVisualEffectInstAssetEngineCommand([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Path = serialized->get_string(Path_type_id); 
	}

	[[nodiscard]] auto
	SetVisualEffectInstAssetEngineCommand::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetVisualEffectInstAssetEngineCommand::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetVisualEffectInstAssetEngineCommand> {
		if (incoming_type_id == SetVisualEffectInstAssetEngineCommand::type_id) {
			return std::make_shared<SetVisualEffectInstAssetEngineCommand>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated