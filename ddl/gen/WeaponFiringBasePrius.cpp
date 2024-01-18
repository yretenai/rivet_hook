// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UseItemFiringPrius.hpp>
#include <rivet/ddl/generated/BasicShotFiringPrius.hpp>
#include <rivet/ddl/generated/WeaponEmitterBasePrius.hpp> 

#include <rivet/ddl/generated/WeaponFiringBasePrius.hpp>

namespace rivet::ddl::generated {
	WeaponFiringBasePrius::WeaponFiringBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Emitter = serialized->unwrap_into<rivet::ddl::generated::WeaponEmitterBasePrius>(Emitter_type_id);
		FireSoundRange = serialized->get_float(FireSoundRange_type_id, 10.000000f);
		NoiseMultiplier = serialized->get_float(NoiseMultiplier_type_id, 1.000000f);
		ScentMultiplier = serialized->get_float(ScentMultiplier_type_id, 1.000000f);
		FireEventFxId = serialized->get_uint8(FireEventFxId_type_id, 0u); 
	}

	[[nodiscard]] auto
	WeaponFiringBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponFiringBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponFiringBasePrius> {
		if (incoming_type_id == WeaponFiringBasePrius::type_id) {
			return std::make_shared<WeaponFiringBasePrius>(serialized);
		}

		auto BasicShotFiringPrius_ptr = BasicShotFiringPrius::from_substruct(incoming_type_id, serialized);
		if (BasicShotFiringPrius_ptr != nullptr) {
			return BasicShotFiringPrius_ptr;
		}

		auto UseItemFiringPrius_ptr = UseItemFiringPrius::from_substruct(incoming_type_id, serialized);
		if (UseItemFiringPrius_ptr != nullptr) {
			return UseItemFiringPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
