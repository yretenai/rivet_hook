// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierShockwaveExpandingRingSheepPrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierShockwaveExpandingRingSheepPrius::DamageModifierShockwaveExpandingRingSheepPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierShockwaveExpandingRingPrius(serialized) {
		RingActorAssetId = serialized->get_uint64(RingActorAssetId_type_id);
		SheepActorAssetId = serialized->get_uint64(SheepActorAssetId_type_id);
		SheepStatusMaterialGraphAssetId = serialized->get_uint64(SheepStatusMaterialGraphAssetId_type_id); 
	}

	[[nodiscard]] auto
	DamageModifierShockwaveExpandingRingSheepPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierShockwaveExpandingRingSheepPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierShockwaveExpandingRingSheepPrius> {
		if (incoming_type_id == DamageModifierShockwaveExpandingRingSheepPrius::type_id) {
			return std::make_shared<DamageModifierShockwaveExpandingRingSheepPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
