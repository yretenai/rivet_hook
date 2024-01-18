// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CameraFreezeOptions.hpp>

namespace rivet::ddl::generated {
	CameraFreezeOptions::CameraFreezeOptions([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DoCameraFreeze = serialized->get_bool(DoCameraFreeze_type_id, false);
		FreezeTime = serialized->get_float(FreezeTime_type_id, 0.250000f);
		FreezeMoveDistance = serialized->get_float(FreezeMoveDistance_type_id, 0.000000f);
		AllowInputBreak = serialized->get_bool(AllowInputBreak_type_id, false); 
	}

	[[nodiscard]] auto
	CameraFreezeOptions::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CameraFreezeOptions::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraFreezeOptions> {
		if (incoming_type_id == CameraFreezeOptions::type_id) {
			return std::make_shared<CameraFreezeOptions>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
