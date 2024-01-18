// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimClueGamePrius.hpp>

namespace rivet::ddl::generated {
	AnimClueGamePrius::AnimClueGamePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DelayAfterUse = serialized->get_float(DelayAfterUse_type_id, 0.000000f);
		SkipAlertAnim = serialized->get_bool(SkipAlertAnim_type_id, false);
		RandomStart = serialized->get_bool(RandomStart_type_id, false); 
	}

	[[nodiscard]] auto
	AnimClueGamePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimClueGamePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimClueGamePrius> {
		if (incoming_type_id == AnimClueGamePrius::type_id) {
			return std::make_shared<AnimClueGamePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
