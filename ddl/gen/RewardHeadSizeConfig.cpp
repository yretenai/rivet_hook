// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeadSizeMapping.hpp> 

#include <rivet/ddl/generated/RewardHeadSizeConfig.hpp>

namespace rivet::ddl::generated {
	RewardHeadSizeConfig::RewardHeadSizeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		HeadSizeMappings = serialized->unwrap_into_many<rivet::ddl::generated::HeadSizeMapping>(HeadSizeMappings_type_id); 
	}

	[[nodiscard]] auto
	RewardHeadSizeConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RewardHeadSizeConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RewardHeadSizeConfig> {
		if (incoming_type_id == RewardHeadSizeConfig::type_id) {
			return std::make_shared<RewardHeadSizeConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
