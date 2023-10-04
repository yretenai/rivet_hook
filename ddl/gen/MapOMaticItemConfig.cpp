// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MapOMaticItemConfig.hpp>

namespace rivet::ddl::generated {
	MapOMaticItemConfig::MapOMaticItemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GadgetItemConfig(serialized) {

	}

	[[nodiscard]] auto
	MapOMaticItemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MapOMaticItemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MapOMaticItemConfig> {
		if (incoming_type_id == MapOMaticItemConfig::type_id) {
			return std::make_shared<MapOMaticItemConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
