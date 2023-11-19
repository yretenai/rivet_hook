// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CharacterPrereqNodeDef.hpp>

namespace rivet::ddl::generated {
	CharacterPrereqNodeDef::CharacterPrereqNodeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PrereqNodeBaseDef(serialized) {
		RequiredHeroType = serialized->get_enum<rivet::ddl::generated::HeroTypes>(RequiredHeroType_type_id, rivet::ddl::generated::HeroTypes_values); 
	}

	[[nodiscard]] auto
	CharacterPrereqNodeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CharacterPrereqNodeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CharacterPrereqNodeDef> {
		if (incoming_type_id == CharacterPrereqNodeDef::type_id) {
			return std::make_shared<CharacterPrereqNodeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated