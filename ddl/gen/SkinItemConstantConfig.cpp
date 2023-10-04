// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemConstantOverrideListElement.hpp> 

#include <rivet/ddl/generated/SkinItemConstantConfig.hpp>

namespace rivet::ddl::generated {
	SkinItemConstantConfig::SkinItemConstantConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		ConstantOverrideList = serialized->unwrap_into_many<rivet::ddl::generated::SkinItemConstantOverrideListElement>(ConstantOverrideList_type_id); 
	}

	[[nodiscard]] auto
	SkinItemConstantConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemConstantConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemConstantConfig> {
		if (incoming_type_id == SkinItemConstantConfig::type_id) {
			return std::make_shared<SkinItemConstantConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated