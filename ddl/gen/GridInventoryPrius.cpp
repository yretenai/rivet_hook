// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GridInventoryPrius.hpp>

namespace rivet::ddl::generated {
	GridInventoryPrius::GridInventoryPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Width = serialized->get_uint16(Width_type_id, 0u);
		Height = serialized->get_uint16(Height_type_id, 0u); 
	}

	[[nodiscard]] auto
	GridInventoryPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GridInventoryPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GridInventoryPrius> {
		if (incoming_type_id == GridInventoryPrius::type_id) {
			return std::make_shared<GridInventoryPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
