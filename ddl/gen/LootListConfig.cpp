// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ItemElement.hpp> 

#include <rivet/ddl/generated/LootListConfig.hpp>

namespace rivet::ddl::generated {
	LootListConfig::LootListConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		SelectType = serialized->get_enum<rivet::ddl::generated::xd80b176a>(SelectType_type_id, rivet::ddl::generated::xd80b176a_values);
		Items = serialized->unwrap_into_many<rivet::ddl::generated::ItemElement>(Items_type_id); 
	}

	[[nodiscard]] auto
	LootListConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LootListConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LootListConfig> {
		if (incoming_type_id == LootListConfig::type_id) {
			return std::make_shared<LootListConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
