// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScriptDebugActorGroupEntry.hpp> 

#include <rivet/ddl/generated/ScriptDebugActorVarResponse.hpp>

namespace rivet::ddl::generated {
	ScriptDebugActorVarResponse::ScriptDebugActorVarResponse([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VarTuid = serialized->get_uint64(VarTuid_type_id);
		Actors = serialized->unwrap_into_many<rivet::ddl::generated::ScriptDebugActorGroupEntry>(Actors_type_id); 
	}

	[[nodiscard]] auto
	ScriptDebugActorVarResponse::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptDebugActorVarResponse::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptDebugActorVarResponse> {
		if (incoming_type_id == ScriptDebugActorVarResponse::type_id) {
			return std::make_shared<ScriptDebugActorVarResponse>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated