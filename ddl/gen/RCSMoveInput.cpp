// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RCSMoveInput.hpp>

namespace rivet::ddl::generated {
	RCSMoveInput::RCSMoveInput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		FromFile = serialized->get_string(FromFile_type_id);
		ToFile = serialized->get_string(ToFile_type_id);
		Changelist = serialized->get_uint32(Changelist_type_id);
		Force = serialized->get_bool(Force_type_id);
		Preview = serialized->get_bool(Preview_type_id); 
	}

	[[nodiscard]] auto
	RCSMoveInput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RCSMoveInput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RCSMoveInput> {
		if (incoming_type_id == RCSMoveInput::type_id) {
			return std::make_shared<RCSMoveInput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated