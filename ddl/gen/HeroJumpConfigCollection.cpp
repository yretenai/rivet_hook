// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroJumpConfig.hpp>
#include <rivet/ddl/generated/HeroDoubleJumpConfig.hpp> 

#include <rivet/ddl/generated/HeroJumpConfigCollection.hpp>

namespace rivet::ddl::generated {
	HeroJumpConfigCollection::HeroJumpConfigCollection([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SingleJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(SingleJumpConfig_type_id);
		AimModeSingleJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(AimModeSingleJumpConfig_type_id);
		DoubleJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroDoubleJumpConfig>(DoubleJumpConfig_type_id);
		AimModeDoubleJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroDoubleJumpConfig>(AimModeDoubleJumpConfig_type_id);
		FlipJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(FlipJumpConfig_type_id);
		FallJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(FallJumpConfig_type_id);
		GlideJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(GlideJumpConfig_type_id);
		MeleeSmashJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(MeleeSmashJumpConfig_type_id);
		LedgeJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(LedgeJumpConfig_type_id);
		GrindJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(GrindJumpConfig_type_id);
		GrindDoubleJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroDoubleJumpConfig>(GrindDoubleJumpConfig_type_id);
		GrindJumpTransferConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(GrindJumpTransferConfig_type_id);
		WallJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(WallJumpConfig_type_id);
		WallRunJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(WallRunJumpConfig_type_id);
		LavaJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(LavaJumpConfig_type_id);
		QuicksandJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(QuicksandJumpConfig_type_id);
		SpringJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(SpringJumpConfig_type_id);
		SwimJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(SwimJumpConfig_type_id);
		VaultJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(VaultJumpConfig_type_id);
		TransformJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(TransformJumpConfig_type_id);
		HoverbootJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(HoverbootJumpConfig_type_id);
		HoverbootDoubleJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroDoubleJumpConfig>(HoverbootDoubleJumpConfig_type_id);
		HoverbootFallJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(HoverbootFallJumpConfig_type_id);
		HoverbootBoostJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(HoverbootBoostJumpConfig_type_id);
		SwingshotJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(SwingshotJumpConfig_type_id);
		BounceMomentumJumpConfig = serialized->unwrap_into<rivet::ddl::generated::HeroJumpConfig>(BounceMomentumJumpConfig_type_id); 
	}

	[[nodiscard]] auto
	HeroJumpConfigCollection::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroJumpConfigCollection::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroJumpConfigCollection> {
		if (incoming_type_id == HeroJumpConfigCollection::type_id) {
			return std::make_shared<HeroJumpConfigCollection>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
