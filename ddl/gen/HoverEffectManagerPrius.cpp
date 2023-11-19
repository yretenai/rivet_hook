// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HoverEffectManagerPrius.hpp>

namespace rivet::ddl::generated {
	HoverEffectManagerPrius::HoverEffectManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EffectActor = serialized->get_string(EffectActor_type_id);
		HeightAboveGroundMax = serialized->get_float(HeightAboveGroundMax_type_id);
		FastSpeedThreshold = serialized->get_float(FastSpeedThreshold_type_id);
		StartEnabled = serialized->get_bool(StartEnabled_type_id); 
	}

	[[nodiscard]] auto
	HoverEffectManagerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HoverEffectManagerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoverEffectManagerPrius> {
		if (incoming_type_id == HoverEffectManagerPrius::type_id) {
			return std::make_shared<HoverEffectManagerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated