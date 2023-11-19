// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CollectibleInstanceSaveData.hpp>

namespace rivet::ddl::generated {
	CollectibleInstanceSaveData::CollectibleInstanceSaveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Completed = serialized->get_bool(Completed_type_id); 
	}

	[[nodiscard]] auto
	CollectibleInstanceSaveData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CollectibleInstanceSaveData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CollectibleInstanceSaveData> {
		if (incoming_type_id == CollectibleInstanceSaveData::type_id) {
			return std::make_shared<CollectibleInstanceSaveData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated