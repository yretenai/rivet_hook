// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UICollectibleTypeBase.hpp> 

#include <rivet/ddl/generated/UICollectible.hpp>

namespace rivet::ddl::generated {
	UICollectible::UICollectible([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->unwrap_into<rivet::ddl::generated::UICollectibleTypeBase>(Type_type_id);
		DisplayName = serialized->get_string(DisplayName_type_id);
		DisplayDesc = serialized->get_string(DisplayDesc_type_id);
		DisplayImage = serialized->get_string(DisplayImage_type_id); 
	}

	auto
	UICollectible::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	UICollectible::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UICollectible::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UICollectible> {
		if (incoming_type_id == UICollectible::type_id) {
			return std::make_shared<UICollectible>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated