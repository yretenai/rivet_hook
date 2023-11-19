// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SSAOSettings.hpp>

namespace rivet::ddl::generated {
	SSAOSettings::SSAOSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RTContribution = serialized->get_float(RTContribution_type_id);
		RTRadiusScale = serialized->get_float(RTRadiusScale_type_id);
		ThinOcclAdjust = serialized->get_float(ThinOcclAdjust_type_id);
		MinRadius = serialized->get_float(MinRadius_type_id); 
	}

	[[nodiscard]] auto
	SSAOSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SSAOSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SSAOSettings> {
		if (incoming_type_id == SSAOSettings::type_id) {
			return std::make_shared<SSAOSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated