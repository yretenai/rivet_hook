// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageEmitEntry.hpp> 

#include <rivet/ddl/generated/DamageEmitterMultiPrius.hpp>

namespace rivet::ddl::generated {
	DamageEmitterMultiPrius::DamageEmitterMultiPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EnabledComponentBasePrius(serialized) {
		DamageSources = serialized->unwrap_into_many<rivet::ddl::generated::DamageEmitEntry>(DamageSources_type_id);
		HeroCloseDist = serialized->get_float(HeroCloseDist_type_id, 20.000000f); 
	}

	[[nodiscard]] auto
	DamageEmitterMultiPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageEmitterMultiPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageEmitterMultiPrius> {
		if (incoming_type_id == DamageEmitterMultiPrius::type_id) {
			return std::make_shared<DamageEmitterMultiPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
