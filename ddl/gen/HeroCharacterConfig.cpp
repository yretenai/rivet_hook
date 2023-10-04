// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroCharacterData.hpp> 

#include <rivet/ddl/generated/HeroCharacterConfig.hpp>

namespace rivet::ddl::generated {
	HeroCharacterConfig::HeroCharacterConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		CharacterList = serialized->unwrap_into_many<rivet::ddl::generated::HeroCharacterData>(CharacterList_type_id); 
	}

	[[nodiscard]] auto
	HeroCharacterConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroCharacterConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroCharacterConfig> {
		if (incoming_type_id == HeroCharacterConfig::type_id) {
			return std::make_shared<HeroCharacterConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
