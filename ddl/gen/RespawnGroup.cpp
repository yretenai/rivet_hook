// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RespawnGroup.hpp>

namespace rivet::ddl::generated {
	RespawnGroup::RespawnGroup([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ResettableActors = serialized->get_uint64(ResettableActors_type_id);
		RespawnAsset = serialized->get_string(RespawnAsset_type_id);
		RespawnWhenAnyCrateDestroyed = serialized->get_bool(RespawnWhenAnyCrateDestroyed_type_id); 
	}

	[[nodiscard]] auto
	RespawnGroup::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RespawnGroup::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RespawnGroup> {
		if (incoming_type_id == RespawnGroup::type_id) {
			return std::make_shared<RespawnGroup>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated