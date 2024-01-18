// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GridItemConfig.hpp>
#include <rivet/ddl/generated/SkinItemConfig.hpp>
#include <rivet/ddl/generated/GameItemConfig.hpp> 

#include <rivet/ddl/generated/ItemConfig.hpp>

namespace rivet::ddl::generated {
	ItemConfig::ItemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Stackable = serialized->get_bool(Stackable_type_id, true);
		MaxCount = serialized->get_uint32(MaxCount_type_id, 0u);
		ItemActor = serialized->get_string(ItemActor_type_id, {}); 
	}

	[[nodiscard]] auto
	ItemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ItemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemConfig> {
		if (incoming_type_id == ItemConfig::type_id) {
			return std::make_shared<ItemConfig>(serialized);
		}

		auto GameItemConfig_ptr = GameItemConfig::from_substruct(incoming_type_id, serialized);
		if (GameItemConfig_ptr != nullptr) {
			return GameItemConfig_ptr;
		}

		auto SkinItemConfig_ptr = SkinItemConfig::from_substruct(incoming_type_id, serialized);
		if (SkinItemConfig_ptr != nullptr) {
			return SkinItemConfig_ptr;
		}

		auto GridItemConfig_ptr = GridItemConfig::from_substruct(incoming_type_id, serialized);
		if (GridItemConfig_ptr != nullptr) {
			return GridItemConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
