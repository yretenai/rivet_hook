// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BeamShotPrius.hpp>
#include <rivet/ddl/generated/GrappleHookShotPrius.hpp>
#include <rivet/ddl/generated/ShotSchrodingerPrius.hpp>
#include <rivet/ddl/generated/ScriptedShotPrius.hpp>
#include <rivet/ddl/generated/ShotSwingshotPrius.hpp>
#include <rivet/ddl/generated/BotLaserShotPrius.hpp>
#include <rivet/ddl/generated/NodalShotBasePrius.hpp>
#include <rivet/ddl/generated/SimpleShotPrius.hpp>
#include <rivet/ddl/generated/FlyerPickupShotPrius.hpp>
#include <rivet/ddl/generated/ShotShakeData.hpp>
#include <rivet/ddl/generated/ShotMotionBasePrius.hpp> 

#include <rivet/ddl/generated/ShotBasePrius.hpp>

namespace rivet::ddl::generated {
	ShotBasePrius::ShotBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InitialMotion = serialized->unwrap_into<rivet::ddl::generated::ShotMotionBasePrius>(InitialMotion_type_id);
		ConduitAsset = serialized->get_string(ConduitAsset_type_id, {});
		FXVariantCount = serialized->get_uint8(FXVariantCount_type_id, 1u);
		FlewByRange = serialized->get_float(FlewByRange_type_id, 0.000000f);
		ShakeData = serialized->unwrap_into_many<rivet::ddl::generated::ShotShakeData>(ShakeData_type_id); 
	}

	[[nodiscard]] auto
	ShotBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotBasePrius> {
		if (incoming_type_id == ShotBasePrius::type_id) {
			return std::make_shared<ShotBasePrius>(serialized);
		}

		auto SimpleShotPrius_ptr = SimpleShotPrius::from_substruct(incoming_type_id, serialized);
		if (SimpleShotPrius_ptr != nullptr) {
			return SimpleShotPrius_ptr;
		}

		auto ShotSwingshotPrius_ptr = ShotSwingshotPrius::from_substruct(incoming_type_id, serialized);
		if (ShotSwingshotPrius_ptr != nullptr) {
			return ShotSwingshotPrius_ptr;
		}

		auto ScriptedShotPrius_ptr = ScriptedShotPrius::from_substruct(incoming_type_id, serialized);
		if (ScriptedShotPrius_ptr != nullptr) {
			return ScriptedShotPrius_ptr;
		}

		auto ShotSchrodingerPrius_ptr = ShotSchrodingerPrius::from_substruct(incoming_type_id, serialized);
		if (ShotSchrodingerPrius_ptr != nullptr) {
			return ShotSchrodingerPrius_ptr;
		}

		auto NodalShotBasePrius_ptr = NodalShotBasePrius::from_substruct(incoming_type_id, serialized);
		if (NodalShotBasePrius_ptr != nullptr) {
			return NodalShotBasePrius_ptr;
		}

		auto BotLaserShotPrius_ptr = BotLaserShotPrius::from_substruct(incoming_type_id, serialized);
		if (BotLaserShotPrius_ptr != nullptr) {
			return BotLaserShotPrius_ptr;
		}

		auto BeamShotPrius_ptr = BeamShotPrius::from_substruct(incoming_type_id, serialized);
		if (BeamShotPrius_ptr != nullptr) {
			return BeamShotPrius_ptr;
		}

		auto GrappleHookShotPrius_ptr = GrappleHookShotPrius::from_substruct(incoming_type_id, serialized);
		if (GrappleHookShotPrius_ptr != nullptr) {
			return GrappleHookShotPrius_ptr;
		}

		auto FlyerPickupShotPrius_ptr = FlyerPickupShotPrius::from_substruct(incoming_type_id, serialized);
		if (FlyerPickupShotPrius_ptr != nullptr) {
			return FlyerPickupShotPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
