// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ItemInventoryPrius.hpp>

namespace rivet::ddl::generated {
	ItemInventoryPrius::ItemInventoryPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Size = serialized->get_uint32(Size_type_id, 16u);
		SyncType = serialized->get_enum<rivet::ddl::generated::SyncTypes>(SyncType_type_id, rivet::ddl::generated::SyncTypes_values, rivet::ddl::generated::SyncTypes::Sync_continuously); 
	}

	[[nodiscard]] auto
	ItemInventoryPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ItemInventoryPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemInventoryPrius> {
		if (incoming_type_id == ItemInventoryPrius::type_id) {
			return std::make_shared<ItemInventoryPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
