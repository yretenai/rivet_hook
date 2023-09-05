// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SoundMaterialbstructionValue.hpp> 

#include <rivet/ddl/generated/SoundMaterialObstructionConfig.hpp>

namespace rivet::ddl::generated {
	SoundMaterialObstructionConfig::SoundMaterialObstructionConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		ObsValues = serialized->unwrap_into_many<rivet::ddl::generated::SoundMaterialbstructionValue>(ObsValues_type_id); 
	}

	auto
	SoundMaterialObstructionConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	SoundMaterialObstructionConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SoundMaterialObstructionConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundMaterialObstructionConfig> {
		if (incoming_type_id == SoundMaterialObstructionConfig::type_id) {
			return std::make_shared<SoundMaterialObstructionConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated