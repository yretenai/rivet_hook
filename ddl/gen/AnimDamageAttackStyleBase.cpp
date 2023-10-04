// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDamageAttackStylePrim.hpp>
#include <rivet/ddl/generated/AnimDamageProcessorCrescentPrius.hpp>
#include <rivet/ddl/generated/AnimDamageProcessorExplosionPrius.hpp>
#include <rivet/ddl/generated/AnimDamageAttackStyleMultiPrim.hpp>
#include <rivet/ddl/generated/AnimDamageAttackStyleArc.hpp> 

#include <rivet/ddl/generated/AnimDamageAttackStyleBase.hpp>

namespace rivet::ddl::generated {
	AnimDamageAttackStyleBase::AnimDamageAttackStyleBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DamageIdHash = serialized->get_uint32(DamageIdHash_type_id);
		WeaponIdHash = serialized->get_uint32(WeaponIdHash_type_id); 
	}

	[[nodiscard]] auto
	AnimDamageAttackStyleBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDamageAttackStyleBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDamageAttackStyleBase> {
		if (incoming_type_id == AnimDamageAttackStyleBase::type_id) {
			return std::make_shared<AnimDamageAttackStyleBase>(serialized);
		}

		auto AnimDamageAttackStylePrim_ptr = AnimDamageAttackStylePrim::from_substruct(incoming_type_id, serialized);
		if (AnimDamageAttackStylePrim_ptr != nullptr) {
			return AnimDamageAttackStylePrim_ptr;
		}

		auto AnimDamageProcessorExplosionPrius_ptr = AnimDamageProcessorExplosionPrius::from_substruct(incoming_type_id, serialized);
		if (AnimDamageProcessorExplosionPrius_ptr != nullptr) {
			return AnimDamageProcessorExplosionPrius_ptr;
		}

		auto AnimDamageProcessorCrescentPrius_ptr = AnimDamageProcessorCrescentPrius::from_substruct(incoming_type_id, serialized);
		if (AnimDamageProcessorCrescentPrius_ptr != nullptr) {
			return AnimDamageProcessorCrescentPrius_ptr;
		}

		auto AnimDamageAttackStyleMultiPrim_ptr = AnimDamageAttackStyleMultiPrim::from_substruct(incoming_type_id, serialized);
		if (AnimDamageAttackStyleMultiPrim_ptr != nullptr) {
			return AnimDamageAttackStyleMultiPrim_ptr;
		}

		auto AnimDamageAttackStyleArc_ptr = AnimDamageAttackStyleArc::from_substruct(incoming_type_id, serialized);
		if (AnimDamageAttackStyleArc_ptr != nullptr) {
			return AnimDamageAttackStyleArc_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
