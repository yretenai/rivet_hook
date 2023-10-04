// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MoverConfig.hpp>
#include <rivet/ddl/generated/MovementConfig.hpp>
#include <rivet/ddl/generated/CVCShapeConfig.hpp>
#include <rivet/ddl/generated/SteeringConfig.hpp>
#include <rivet/ddl/generated/GameBotConfigMovement.hpp>
#include <rivet/ddl/generated/NavCapsule.hpp>
#include <rivet/ddl/generated/SteeringPartnerCurveConfig.hpp> 

#include <rivet/ddl/generated/BotConfigMovement.hpp>

namespace rivet::ddl::generated {
	BotConfigMovement::BotConfigMovement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MovementConfigs = serialized->unwrap_into_many<rivet::ddl::generated::MovementConfig>(MovementConfigs_type_id);
		MoverConfig = serialized->unwrap_into<rivet::ddl::generated::MoverConfig>(MoverConfig_type_id);
		EventuallyDiesWhileFalling = serialized->get_bool(EventuallyDiesWhileFalling_type_id);
		LethalFallTime = serialized->get_float(LethalFallTime_type_id);
		TakesFallDamage = serialized->get_bool(TakesFallDamage_type_id);
		MinDamagingHeight = serialized->get_float(MinDamagingHeight_type_id);
		MaxDamagingHeight = serialized->get_float(MaxDamagingHeight_type_id);
		SteeringConfig = serialized->unwrap_into<rivet::ddl::generated::SteeringConfig>(SteeringConfig_type_id);
		SteeringPartnerCurveConfig = serialized->unwrap_into<rivet::ddl::generated::SteeringPartnerCurveConfig>(SteeringPartnerCurveConfig_type_id);
		CVCShape = serialized->unwrap_into<rivet::ddl::generated::CVCShapeConfig>(CVCShape_type_id);
		UseSingleMoveSweep = serialized->get_bool(UseSingleMoveSweep_type_id);
		PushOnEqual = serialized->get_bool(PushOnEqual_type_id);
		UseFullSpeedDeflection = serialized->get_bool(UseFullSpeedDeflection_type_id);
		UseSoftCollisions = serialized->get_bool(UseSoftCollisions_type_id);
		SoftCVCInner = serialized->get_float(SoftCVCInner_type_id);
		SoftCVCOuter = serialized->get_float(SoftCVCOuter_type_id);
		NavObstacle = serialized->unwrap_into<rivet::ddl::generated::NavCapsule>(NavObstacle_type_id);
		Weight = serialized->get_float(Weight_type_id);
		NavMeshLayer = serialized->get_enum<rivet::ddl::generated::xdcbe36a2>(NavMeshLayer_type_id, rivet::ddl::generated::xdcbe36a2_values); 
	}

	[[nodiscard]] auto
	BotConfigMovement::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BotConfigMovement::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotConfigMovement> {
		if (incoming_type_id == BotConfigMovement::type_id) {
			return std::make_shared<BotConfigMovement>(serialized);
		}

		auto GameBotConfigMovement_ptr = GameBotConfigMovement::from_substruct(incoming_type_id, serialized);
		if (GameBotConfigMovement_ptr != nullptr) {
			return GameBotConfigMovement_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated