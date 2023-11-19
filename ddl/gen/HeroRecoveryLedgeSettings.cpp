// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroRecoveryLedgeSettings.hpp>

namespace rivet::ddl::generated {
	HeroRecoveryLedgeSettings::HeroRecoveryLedgeSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		EnableRecoveryLedgesOnWalkOff = serialized->get_bool(EnableRecoveryLedgesOnWalkOff_type_id);
		EnableRecoveryLedgesOnRunOffNoCombat = serialized->get_bool(EnableRecoveryLedgesOnRunOffNoCombat_type_id);
		EnableRecoveryLedgesOnRunOffInCombat = serialized->get_bool(EnableRecoveryLedgesOnRunOffInCombat_type_id);
		EnableFrontRecoveryLedgesOnJump = serialized->get_bool(EnableFrontRecoveryLedgesOnJump_type_id);
		EnableRecoveryLedgesOnKnockedOff = serialized->get_bool(EnableRecoveryLedgesOnKnockedOff_type_id);
		EnableEdgeClampingOnHitReact = serialized->get_bool(EnableEdgeClampingOnHitReact_type_id); 
	}

	[[nodiscard]] auto
	HeroRecoveryLedgeSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroRecoveryLedgeSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroRecoveryLedgeSettings> {
		if (incoming_type_id == HeroRecoveryLedgeSettings::type_id) {
			return std::make_shared<HeroRecoveryLedgeSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated