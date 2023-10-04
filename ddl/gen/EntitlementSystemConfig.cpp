// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EntitlementSystemConfig.hpp>

namespace rivet::ddl::generated {
	EntitlementSystemConfig::EntitlementSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		CarbonoxArmorSet = serialized->get_string(CarbonoxArmorSet_type_id);
		FiveArmorsSets = serialized->get_strings(FiveArmorsSets_type_id);
		PixelizerItem = serialized->get_string(PixelizerItem_type_id);
		ArmorPatchSets = serialized->get_strings(ArmorPatchSets_type_id); 
	}

	[[nodiscard]] auto
	EntitlementSystemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EntitlementSystemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EntitlementSystemConfig> {
		if (incoming_type_id == EntitlementSystemConfig::type_id) {
			return std::make_shared<EntitlementSystemConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated