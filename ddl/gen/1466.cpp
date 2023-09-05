// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TelekinesisData.hpp> 

#include <rivet/ddl/generated/BotComboMoveTelekinesis.hpp>

namespace rivet::ddl::generated {
	BotComboMoveTelekinesis::BotComboMoveTelekinesis([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BotComboMove(serialized) {
		data = serialized->unwrap_into<rivet::ddl::generated::TelekinesisData>(data_type_id); 
	}

	auto
	BotComboMoveTelekinesis::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BotComboMoveTelekinesis::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotComboMoveTelekinesis::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotComboMoveTelekinesis> {
		if (incoming_type_id == BotComboMoveTelekinesis::type_id) {
			return std::make_shared<BotComboMoveTelekinesis>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated