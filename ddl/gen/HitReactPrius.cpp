// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HitReactGamePrius.hpp>
#include <rivet/ddl/generated/HitReactMeteredPrius.hpp> 

#include <rivet/ddl/generated/HitReactPrius.hpp>

namespace rivet::ddl::generated {
	HitReactPrius::HitReactPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ReactToIgnoredDamage = serialized->get_bool(ReactToIgnoredDamage_type_id);
		SlowDownOnHit = serialized->get_bool(SlowDownOnHit_type_id); 
	}

	[[nodiscard]] auto
	HitReactPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HitReactPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HitReactPrius> {
		if (incoming_type_id == HitReactPrius::type_id) {
			return std::make_shared<HitReactPrius>(serialized);
		}

		auto HitReactGamePrius_ptr = HitReactGamePrius::from_substruct(incoming_type_id, serialized);
		if (HitReactGamePrius_ptr != nullptr) {
			return HitReactGamePrius_ptr;
		}

		auto HitReactMeteredPrius_ptr = HitReactMeteredPrius::from_substruct(incoming_type_id, serialized);
		if (HitReactMeteredPrius_ptr != nullptr) {
			return HitReactMeteredPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
