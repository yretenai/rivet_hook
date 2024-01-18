// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimComponentStructuredTrace.hpp>

namespace rivet::ddl::generated {
	AnimComponentStructuredTrace::AnimComponentStructuredTrace([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MTime = serialized->get_int32(MTime_type_id, 0u);
		STime = serialized->get_int32(STime_type_id, 0u);
		ActorName = serialized->get_string(ActorName_type_id, {});
		Message = serialized->get_string(Message_type_id, {}); 
	}

	[[nodiscard]] auto
	AnimComponentStructuredTrace::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimComponentStructuredTrace::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimComponentStructuredTrace> {
		if (incoming_type_id == AnimComponentStructuredTrace::type_id) {
			return std::make_shared<AnimComponentStructuredTrace>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
