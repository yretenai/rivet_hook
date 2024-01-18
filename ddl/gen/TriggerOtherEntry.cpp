// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerOtherEntry.hpp>

namespace rivet::ddl::generated {
	TriggerOtherEntry::TriggerOtherEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		GroupToTrigger = serialized->get_string(GroupToTrigger_type_id, "");
		ActorToTrigger = serialized->get_uint64(ActorToTrigger_type_id, 0ull); 
	}

	[[nodiscard]] auto
	TriggerOtherEntry::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerOtherEntry::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerOtherEntry> {
		if (incoming_type_id == TriggerOtherEntry::type_id) {
			return std::make_shared<TriggerOtherEntry>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
