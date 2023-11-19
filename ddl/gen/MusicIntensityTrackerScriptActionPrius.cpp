// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MusicIntensityTrackerScriptActionPrius.hpp>

namespace rivet::ddl::generated {
	MusicIntensityTrackerScriptActionPrius::MusicIntensityTrackerScriptActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		StartListening = serialized->get_bool(StartListening_type_id);
		SendIntensityOnActivation = serialized->get_bool(SendIntensityOnActivation_type_id); 
	}

	[[nodiscard]] auto
	MusicIntensityTrackerScriptActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MusicIntensityTrackerScriptActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MusicIntensityTrackerScriptActionPrius> {
		if (incoming_type_id == MusicIntensityTrackerScriptActionPrius::type_id) {
			return std::make_shared<MusicIntensityTrackerScriptActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated