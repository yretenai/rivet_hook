// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CheckInventoryArrayElement.hpp>

namespace rivet::ddl::generated {
	CheckInventoryArrayElement::CheckInventoryArrayElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ItemConfig = serialized->get_string(ItemConfig_type_id);
		Count = serialized->get_uint32(Count_type_id);
		Equipped = serialized->get_bool(Equipped_type_id); 
	}

	[[nodiscard]] auto
	CheckInventoryArrayElement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CheckInventoryArrayElement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CheckInventoryArrayElement> {
		if (incoming_type_id == CheckInventoryArrayElement::type_id) {
			return std::make_shared<CheckInventoryArrayElement>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated