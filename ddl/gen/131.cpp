// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeakspotModelData.hpp> 

#include <rivet/ddl/generated/WeakspotModelSwapPrius.hpp>

namespace rivet::ddl::generated {
	WeakspotModelSwapPrius::WeakspotModelSwapPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeakspotDestructiblePrius(serialized) {
		DefaultModel = serialized->get_string(DefaultModel_type_id);
		DestroyedModel = serialized->get_string(DestroyedModel_type_id);
		IntermediateModels = serialized->unwrap_into_many<rivet::ddl::generated::WeakspotModelData>(IntermediateModels_type_id); 
	}

	auto
	WeakspotModelSwapPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	WeakspotModelSwapPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeakspotModelSwapPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeakspotModelSwapPrius> {
		if (incoming_type_id == WeakspotModelSwapPrius::type_id) {
			return std::make_shared<WeakspotModelSwapPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated