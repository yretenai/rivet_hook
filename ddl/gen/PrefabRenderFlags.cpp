// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PrefabRenderFlags.hpp>

namespace rivet::ddl::generated {
	PrefabRenderFlags::PrefabRenderFlags([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Hibernate = serialized->get_bool(Hibernate_type_id); 
	}

	[[nodiscard]] auto
	PrefabRenderFlags::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PrefabRenderFlags::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PrefabRenderFlags> {
		if (incoming_type_id == PrefabRenderFlags::type_id) {
			return std::make_shared<PrefabRenderFlags>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated