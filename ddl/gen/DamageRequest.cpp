// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageOverTimeStoppedEvent.hpp>
#include <rivet/ddl/generated/DamageOverTimeStartedEvent.hpp>
#include <rivet/ddl/generated/CustomDamageData.hpp>
#include <rivet/ddl/generated/DamagePacket.hpp>
#include <rivet/ddl/generated/DamageStatusData.hpp> 

#include <rivet/ddl/generated/DamageRequest.hpp>

namespace rivet::ddl::generated {
	DamageRequest::DamageRequest([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		Type = serialized->get_enum<rivet::ddl::generated::DamageTypes>(Type_type_id, rivet::ddl::generated::DamageTypes_values, rivet::ddl::generated::DamageTypes::None);
		Category = serialized->get_enum<rivet::ddl::generated::DamageTypes>(Category_type_id, rivet::ddl::generated::DamageTypes_values, rivet::ddl::generated::DamageTypes::None);
		Amount = serialized->get_float(Amount_type_id, 0.000000f);
		Duration = serialized->get_float(Duration_type_id, 0.000000f);
		TickInterval = serialized->get_float(TickInterval_type_id, 0.000000f);
		Knockback = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(Knockback_type_id, rivet::ddl::generated::KnockbackLevels_values, rivet::ddl::generated::KnockbackLevels::None);
		KnockbackAmount = serialized->get_float(KnockbackAmount_type_id, 0.000000f);
		KineticMultiplier = serialized->get_float(KineticMultiplier_type_id, 1.000000f);
		ConditionDuration = serialized->get_float(ConditionDuration_type_id, 0.000000f);
		RequestFlags = serialized->get_bitset<rivet::ddl::generated::x65d7dac2>(RequestFlags_type_id, rivet::ddl::generated::x65d7dac2_values, 16384u);
		IgnoreDuration = serialized->get_float(IgnoreDuration_type_id, 0.000000f);
		StatusData = serialized->unwrap_into_many<rivet::ddl::generated::DamageStatusData>(StatusData_type_id);
		CustomData = serialized->unwrap_into_many<rivet::ddl::generated::CustomDamageData>(CustomData_type_id);
		ImpactImpulse = serialized->get_float(ImpactImpulse_type_id, 0.000000f);
		ImpactVelocity = serialized->get_float(ImpactVelocity_type_id, 1.000000f);
		Weapon = serialized->get_uint16(Weapon_type_id, 0u); 
	}

	[[nodiscard]] auto
	DamageRequest::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageRequest::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageRequest> {
		if (incoming_type_id == DamageRequest::type_id) {
			return std::make_shared<DamageRequest>(serialized);
		}

		auto DamagePacket_ptr = DamagePacket::from_substruct(incoming_type_id, serialized);
		if (DamagePacket_ptr != nullptr) {
			return DamagePacket_ptr;
		}

		auto DamageOverTimeStartedEvent_ptr = DamageOverTimeStartedEvent::from_substruct(incoming_type_id, serialized);
		if (DamageOverTimeStartedEvent_ptr != nullptr) {
			return DamageOverTimeStartedEvent_ptr;
		}

		auto DamageOverTimeStoppedEvent_ptr = DamageOverTimeStoppedEvent::from_substruct(incoming_type_id, serialized);
		if (DamageOverTimeStoppedEvent_ptr != nullptr) {
			return DamageOverTimeStoppedEvent_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
