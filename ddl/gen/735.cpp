// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SetDef.hpp>

namespace rivet::ddl::generated {
	SetDef::SetDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SetID = serialized->get_enum<rivet::ddl::generated::xa57aac73>(SetID_type_id, rivet::ddl::generated::xa57aac73_values);
		SetNameLocTag = serialized->get_string(SetNameLocTag_type_id);
		TempSetName = serialized->get_string(TempSetName_type_id);
		SetDescLocTag = serialized->get_string(SetDescLocTag_type_id);
		TempSetDesc = serialized->get_string(TempSetDesc_type_id);
		CardIDs = serialized->get_enums<rivet::ddl::generated::x507460e6>(CardIDs_type_id, rivet::ddl::generated::x507460e6_values);
		Bonus = serialized->get_enum<rivet::ddl::generated::BonusType>(Bonus_type_id, rivet::ddl::generated::BonusType_values);
		BonusAmount = serialized->get_float(BonusAmount_type_id); 
	}

	auto
	SetDef::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	SetDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SetDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetDef> {
		if (incoming_type_id == SetDef::type_id) {
			return std::make_shared<SetDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated