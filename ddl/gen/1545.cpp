// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DynamicEnumValueRef.hpp> 

#include <rivet/ddl/generated/CollectibleTypeDenum.hpp>

namespace rivet::ddl::generated {
	CollectibleTypeDenum::CollectibleTypeDenum([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Denum = serialized->unwrap_into<rivet::ddl::generated::DynamicEnumValueRef>(Denum_type_id); 
	}

	auto
	CollectibleTypeDenum::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	CollectibleTypeDenum::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CollectibleTypeDenum::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CollectibleTypeDenum> {
		if (incoming_type_id == CollectibleTypeDenum::type_id) {
			return std::make_shared<CollectibleTypeDenum>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated