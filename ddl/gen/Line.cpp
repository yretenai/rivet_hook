// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DEVOFollowup.hpp>
#include <rivet/ddl/generated/DEVOLineMemoryWriteback.hpp> 

#include <rivet/ddl/generated/Line.hpp>

namespace rivet::ddl::generated {
	Line::Line([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CharacterVoice = serialized->get_enum<rivet::ddl::generated::Voice>(CharacterVoice_type_id, rivet::ddl::generated::Voice_values, rivet::ddl::generated::Voice::unused);
		LineTagStart = serialized->get_string(LineTagStart_type_id, {});
		LineTagEnd = serialized->get_string(LineTagEnd_type_id, {});
		Weight = serialized->get_float(Weight_type_id, 1.000000f);
		Writebacks = serialized->unwrap_into_many<rivet::ddl::generated::DEVOLineMemoryWriteback>(Writebacks_type_id);
		Followup = serialized->unwrap_into<rivet::ddl::generated::DEVOFollowup>(Followup_type_id); 
	}

	[[nodiscard]] auto
	Line::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Line::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Line> {
		if (incoming_type_id == Line::type_id) {
			return std::make_shared<Line>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
