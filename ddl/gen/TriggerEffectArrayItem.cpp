// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TriggerEffectArrayItem.hpp>

namespace rivet::ddl::generated {
	TriggerEffectArrayItem::TriggerEffectArrayItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EffectType = serialized->get_enum<rivet::ddl::generated::x60ab12b0>(EffectType_type_id, rivet::ddl::generated::x60ab12b0_values);
		Triggers = serialized->get_enum<rivet::ddl::generated::x626794b4>(Triggers_type_id, rivet::ddl::generated::x626794b4_values);
		Enabled = serialized->get_bool(Enabled_type_id);
		TriggerEffectConfig = serialized->get_string(TriggerEffectConfig_type_id); 
	}

	[[nodiscard]] auto
	TriggerEffectArrayItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TriggerEffectArrayItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TriggerEffectArrayItem> {
		if (incoming_type_id == TriggerEffectArrayItem::type_id) {
			return std::make_shared<TriggerEffectArrayItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
