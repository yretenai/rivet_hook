// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ChromaticAbSettingsDef.hpp>

namespace rivet::ddl::generated {
	ChromaticAbSettingsDef::ChromaticAbSettingsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id, false);
		InnerRadius = serialized->get_float(InnerRadius_type_id, 0.300000f);
		OuterRadius = serialized->get_float(OuterRadius_type_id, 1.000000f);
		DisplacementInPixels = serialized->get_float(DisplacementInPixels_type_id, 5.000000f);
		BlurInPixels = serialized->get_float(BlurInPixels_type_id, 2.500000f); 
	}

	[[nodiscard]] auto
	ChromaticAbSettingsDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ChromaticAbSettingsDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ChromaticAbSettingsDef> {
		if (incoming_type_id == ChromaticAbSettingsDef::type_id) {
			return std::make_shared<ChromaticAbSettingsDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
