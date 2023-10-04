// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/YawAndPitchData.hpp> 

#include <rivet/ddl/generated/FirstPersonCamData.hpp>

namespace rivet::ddl::generated {
	FirstPersonCamData::FirstPersonCamData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		YawAndPitch = serialized->unwrap_into<rivet::ddl::generated::YawAndPitchData>(YawAndPitch_type_id);
		StickConfig = serialized->get_string(StickConfig_type_id); 
	}

	[[nodiscard]] auto
	FirstPersonCamData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FirstPersonCamData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FirstPersonCamData> {
		if (incoming_type_id == FirstPersonCamData::type_id) {
			return std::make_shared<FirstPersonCamData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated