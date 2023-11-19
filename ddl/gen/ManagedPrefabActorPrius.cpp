// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ManagedPrefabActorPrius.hpp>

namespace rivet::ddl::generated {
	ManagedPrefabActorPrius::ManagedPrefabActorPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	ManagedPrefabActorPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ManagedPrefabActorPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ManagedPrefabActorPrius> {
		if (incoming_type_id == ManagedPrefabActorPrius::type_id) {
			return std::make_shared<ManagedPrefabActorPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated