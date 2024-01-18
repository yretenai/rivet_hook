// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BotAttackDodgeData.hpp>

namespace rivet::ddl::generated {
	BotAttackDodgeData::BotAttackDodgeData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Properties = serialized->get_bitset<rivet::ddl::generated::xa672d722>(Properties_type_id, rivet::ddl::generated::xa672d722_values, 0u); 
	}

	[[nodiscard]] auto
	BotAttackDodgeData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotAttackDodgeData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotAttackDodgeData> {
		if (incoming_type_id == BotAttackDodgeData::type_id) {
			return std::make_shared<BotAttackDodgeData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
