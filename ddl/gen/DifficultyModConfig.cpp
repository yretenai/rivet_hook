// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DifficultyModDef.hpp> 

#include <rivet/ddl/generated/DifficultyModConfig.hpp>

namespace rivet::ddl::generated {
	DifficultyModConfig::DifficultyModConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		DifficultyModDefs = serialized->unwrap_into_many<rivet::ddl::generated::DifficultyModDef>(DifficultyModDefs_type_id); 
	}

	[[nodiscard]] auto
	DifficultyModConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DifficultyModConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DifficultyModConfig> {
		if (incoming_type_id == DifficultyModConfig::type_id) {
			return std::make_shared<DifficultyModConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated