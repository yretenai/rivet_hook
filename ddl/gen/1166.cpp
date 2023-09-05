// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponShotData.hpp> 

#include <rivet/ddl/generated/WeaponShotDataListItem.hpp>

namespace rivet::ddl::generated {
	WeaponShotDataListItem::WeaponShotDataListItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Shot = serialized->unwrap_into<rivet::ddl::generated::WeaponShotData>(Shot_type_id); 
	}

	auto
	WeaponShotDataListItem::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeaponShotDataListItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponShotDataListItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponShotDataListItem> {
		if (incoming_type_id == WeaponShotDataListItem::type_id) {
			return std::make_shared<WeaponShotDataListItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated