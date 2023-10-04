// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CardDef.hpp>

namespace rivet::ddl::generated {
	CardDef::CardDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CardID = serialized->get_enum<rivet::ddl::generated::x507460e6>(CardID_type_id, rivet::ddl::generated::x507460e6_values);
		CardNameLocTag = serialized->get_string(CardNameLocTag_type_id);
		TempCardName = serialized->get_string(TempCardName_type_id);
		ImageTexture = serialized->get_string(ImageTexture_type_id);
		HLMLocTag = serialized->get_string(HLMLocTag_type_id);
		JSCLocTag = serialized->get_string(JSCLocTag_type_id);
		FirstAppLocTag = serialized->get_string(FirstAppLocTag_type_id);
		BioLocTag = serialized->get_string(BioLocTag_type_id);
		Level = serialized->get_enum<rivet::ddl::generated::LevelEnum>(Level_type_id, rivet::ddl::generated::LevelEnum_values);
		Class = serialized->get_enum<rivet::ddl::generated::x1f61db2e>(Class_type_id, rivet::ddl::generated::x1f61db2e_values);
		Tradeable = serialized->get_bool(Tradeable_type_id);
		HLMType = serialized->get_enum<rivet::ddl::generated::x73ee3658>(HLMType_type_id, rivet::ddl::generated::x73ee3658_values);
		JSCType = serialized->get_enum<rivet::ddl::generated::xa9c1295e>(JSCType_type_id, rivet::ddl::generated::xa9c1295e_values);
		OverrideDuplicateTradeCount = serialized->get_bool(OverrideDuplicateTradeCount_type_id);
		DuplicateTradeCount = serialized->get_uint32(DuplicateTradeCount_type_id); 
	}

	[[nodiscard]] auto
	CardDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CardDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CardDef> {
		if (incoming_type_id == CardDef::type_id) {
			return std::make_shared<CardDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
