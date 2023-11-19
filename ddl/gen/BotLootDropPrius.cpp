// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/CommonLootData.hpp> 

#include <rivet/ddl/generated/BotLootDropPrius.hpp>

namespace rivet::ddl::generated {
	BotLootDropPrius::BotLootDropPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id);
		DropLootForKillerType = serialized->get_enum<rivet::ddl::generated::xa7ea7084>(DropLootForKillerType_type_id, rivet::ddl::generated::xa7ea7084_values);
		LootData = serialized->unwrap_into<rivet::ddl::generated::CommonLootData>(LootData_type_id);
		TypeOfOffset = serialized->get_enum<rivet::ddl::generated::xca7a7360>(TypeOfOffset_type_id, rivet::ddl::generated::xca7a7360_values);
		Offset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Offset_type_id);
		MaxNumSpawns = serialized->get_int32(MaxNumSpawns_type_id);
		LootBlossom = serialized->get_bool(LootBlossom_type_id);
		MinLootSpeed = serialized->get_float(MinLootSpeed_type_id);
		MaxLootSpeed = serialized->get_float(MaxLootSpeed_type_id);
		NoPickupTime = serialized->get_float(NoPickupTime_type_id); 
	}

	[[nodiscard]] auto
	BotLootDropPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotLootDropPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotLootDropPrius> {
		if (incoming_type_id == BotLootDropPrius::type_id) {
			return std::make_shared<BotLootDropPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated