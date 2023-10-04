// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MeleeWeaponSkinData.hpp>

namespace rivet::ddl::generated {
	MeleeWeaponSkinData::MeleeWeaponSkinData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SkinType = serialized->get_enum<rivet::ddl::generated::x387422ea>(SkinType_type_id, rivet::ddl::generated::x387422ea_values);
		SkinIdValue = serialized->get_float(SkinIdValue_type_id); 
	}

	[[nodiscard]] auto
	MeleeWeaponSkinData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MeleeWeaponSkinData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MeleeWeaponSkinData> {
		if (incoming_type_id == MeleeWeaponSkinData::type_id) {
			return std::make_shared<MeleeWeaponSkinData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
