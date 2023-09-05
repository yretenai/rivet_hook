// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ActivityHintWithId.hpp>

namespace rivet::ddl::generated {
	ActivityHintWithId::ActivityHintWithId([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NameTag = serialized->get_string(NameTag_type_id);
		DescTag = serialized->get_string(DescTag_type_id);
		MediaFile = serialized->get_string(MediaFile_type_id);
		HintId = serialized->get_string(HintId_type_id); 
	}

	auto
	ActivityHintWithId::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ActivityHintWithId::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ActivityHintWithId::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ActivityHintWithId> {
		if (incoming_type_id == ActivityHintWithId::type_id) {
			return std::make_shared<ActivityHintWithId>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated