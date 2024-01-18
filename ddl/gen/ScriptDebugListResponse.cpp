// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ScriptDebugListEntry.hpp> 

#include <rivet/ddl/generated/ScriptDebugListResponse.hpp>

namespace rivet::ddl::generated {
	ScriptDebugListResponse::ScriptDebugListResponse([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ListName = serialized->get_string(ListName_type_id, {});
		VarTuid = serialized->get_uint64(VarTuid_type_id, 0ull);
		Entries = serialized->unwrap_into_many<rivet::ddl::generated::ScriptDebugListEntry>(Entries_type_id); 
	}

	[[nodiscard]] auto
	ScriptDebugListResponse::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ScriptDebugListResponse::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptDebugListResponse> {
		if (incoming_type_id == ScriptDebugListResponse::type_id) {
			return std::make_shared<ScriptDebugListResponse>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
