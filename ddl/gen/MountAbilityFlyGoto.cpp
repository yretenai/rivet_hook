// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MountAbilityFlyLand.hpp>
#include <rivet/ddl/generated/MountAbilityFlyPickup.hpp> 

#include <rivet/ddl/generated/MountAbilityFlyGoto.hpp>

namespace rivet::ddl::generated {
	MountAbilityFlyGoto::MountAbilityFlyGoto([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): MountAbilityBase(serialized) {
		AnimOutroName = serialized->get_string(AnimOutroName_type_id, {});
		AnimIntroName = serialized->get_string(AnimIntroName_type_id, {});
		FlyerGotoLocator = serialized->get_string(FlyerGotoLocator_type_id, {});
		GotoActorLocator = serialized->get_string(GotoActorLocator_type_id, {});
		GotoSpeed = serialized->get_float(GotoSpeed_type_id, 20.000000f);
		MinOutroSpeed = serialized->get_float(MinOutroSpeed_type_id, 5.000000f);
		MaxOutroSpeed = serialized->get_float(MaxOutroSpeed_type_id, 15.000000f); 
	}

	[[nodiscard]] auto
	MountAbilityFlyGoto::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MountAbilityFlyGoto::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MountAbilityFlyGoto> {
		if (incoming_type_id == MountAbilityFlyGoto::type_id) {
			return std::make_shared<MountAbilityFlyGoto>(serialized);
		}

		auto MountAbilityFlyPickup_ptr = MountAbilityFlyPickup::from_substruct(incoming_type_id, serialized);
		if (MountAbilityFlyPickup_ptr != nullptr) {
			return MountAbilityFlyPickup_ptr;
		}

		auto MountAbilityFlyLand_ptr = MountAbilityFlyLand::from_substruct(incoming_type_id, serialized);
		if (MountAbilityFlyLand_ptr != nullptr) {
			return MountAbilityFlyLand_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
