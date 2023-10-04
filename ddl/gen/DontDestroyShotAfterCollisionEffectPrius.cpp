// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DontDestroyShotAfterCollisionEffectPrius.hpp>

namespace rivet::ddl::generated {
	DontDestroyShotAfterCollisionEffectPrius::DontDestroyShotAfterCollisionEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ScriptedShotEffectBasePrius(serialized) {

	}

	[[nodiscard]] auto
	DontDestroyShotAfterCollisionEffectPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DontDestroyShotAfterCollisionEffectPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DontDestroyShotAfterCollisionEffectPrius> {
		if (incoming_type_id == DontDestroyShotAfterCollisionEffectPrius::type_id) {
			return std::make_shared<DontDestroyShotAfterCollisionEffectPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
