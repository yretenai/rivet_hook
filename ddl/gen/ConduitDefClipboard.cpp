// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ECMResponseDef.hpp>
#include <rivet/ddl/generated/ECMEventDef.hpp>
#include <rivet/ddl/generated/ECMFilterDef.hpp>
#include <rivet/ddl/generated/ECMSelectorNodeDef.hpp>
#include <rivet/ddl/generated/ECMFieldOpNodeDef.hpp>
#include <rivet/ddl/generated/ECMEffectNodeDef.hpp>
#include <rivet/ddl/generated/ECMInputNodeDef.hpp>
#include <rivet/ddl/generated/ECMCommentNodeDef.hpp> 

#include <rivet/ddl/generated/ConduitDefClipboard.hpp>

namespace rivet::ddl::generated {
	ConduitDefClipboard::ConduitDefClipboard([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		compatibility = serialized->get_string(compatibility_type_id);
		clipboardType = serialized->get_string(clipboardType_type_id);
		CommentNodes = serialized->unwrap_into_many<rivet::ddl::generated::ECMCommentNodeDef>(CommentNodes_type_id);
		InputNodes = serialized->unwrap_into_many<rivet::ddl::generated::ECMInputNodeDef>(InputNodes_type_id);
		EffectNodes = serialized->unwrap_into_many<rivet::ddl::generated::ECMEffectNodeDef>(EffectNodes_type_id);
		FieldOpNodes = serialized->unwrap_into_many<rivet::ddl::generated::ECMFieldOpNodeDef>(FieldOpNodes_type_id);
		SelectorNodes = serialized->unwrap_into_many<rivet::ddl::generated::ECMSelectorNodeDef>(SelectorNodes_type_id);
		GraphId = serialized->get_uint64(GraphId_type_id);
		Events = serialized->unwrap_into_many<rivet::ddl::generated::ECMEventDef>(Events_type_id);
		Filters = serialized->unwrap_into_many<rivet::ddl::generated::ECMFilterDef>(Filters_type_id);
		Responses = serialized->unwrap_into_many<rivet::ddl::generated::ECMResponseDef>(Responses_type_id); 
	}

	[[nodiscard]] auto
	ConduitDefClipboard::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConduitDefClipboard::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConduitDefClipboard> {
		if (incoming_type_id == ConduitDefClipboard::type_id) {
			return std::make_shared<ConduitDefClipboard>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated