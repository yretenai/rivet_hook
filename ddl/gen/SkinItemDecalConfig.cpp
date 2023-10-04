// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemDecalListElement.hpp> 

#include <rivet/ddl/generated/SkinItemDecalConfig.hpp>

namespace rivet::ddl::generated {
	SkinItemDecalConfig::SkinItemDecalConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		DecalList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemDecalListElement>(DecalList_type_id); 
	}

	[[nodiscard]] auto
	SkinItemDecalConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemDecalConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemDecalConfig> {
		if (incoming_type_id == SkinItemDecalConfig::type_id) {
			return std::make_shared<SkinItemDecalConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
