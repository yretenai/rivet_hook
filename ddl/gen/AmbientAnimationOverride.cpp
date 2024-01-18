// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AmbientAnimationOverride.hpp>

namespace rivet::ddl::generated {
	AmbientAnimationOverride::AmbientAnimationOverride([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id, false);
		AmbientAnimation = serialized->get_float(AmbientAnimation_type_id, 0.000000f);
		MaxDisplacement = serialized->get_float(MaxDisplacement_type_id, 2.000000f);
		MaxDynamicForce = serialized->get_float(MaxDynamicForce_type_id, 8.000000f);
		MinDynamicForce = serialized->get_float(MinDynamicForce_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	AmbientAnimationOverride::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AmbientAnimationOverride::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmbientAnimationOverride> {
		if (incoming_type_id == AmbientAnimationOverride::type_id) {
			return std::make_shared<AmbientAnimationOverride>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
