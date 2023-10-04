// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ItemLoadoutCategoryList.hpp>
#include <rivet/ddl/generated/MissionTestLoadout.hpp> 

#include <rivet/ddl/generated/MasterItemLoadoutList.hpp>

namespace rivet::ddl::generated {
	MasterItemLoadoutList::MasterItemLoadoutList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		ItemLoadoutCategoryList = serialized->unwrap_into_many<rivet::ddl::generated::ItemLoadoutCategoryList>(ItemLoadoutCategoryList_type_id);
		MissionLoadouts = serialized->unwrap_into_many<rivet::ddl::generated::MissionTestLoadout>(MissionLoadouts_type_id); 
	}

	[[nodiscard]] auto
	MasterItemLoadoutList::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MasterItemLoadoutList::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MasterItemLoadoutList> {
		if (incoming_type_id == MasterItemLoadoutList::type_id) {
			return std::make_shared<MasterItemLoadoutList>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
