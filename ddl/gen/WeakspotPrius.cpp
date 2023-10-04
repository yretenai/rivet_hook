// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NefariousFinaleWeakspotPrius.hpp>
#include <rivet/ddl/generated/WeakspotDestructiblePrius.hpp>
#include <rivet/ddl/generated/WeakspotRadiusBasedPrius.hpp>
#include <rivet/ddl/generated/WeakspotFilteredPrius.hpp> 

#include <rivet/ddl/generated/WeakspotPrius.hpp>

namespace rivet::ddl::generated {
	WeakspotPrius::WeakspotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierIncomingPrius(serialized) {
		DamageScale = serialized->get_float(DamageScale_type_id);
		AddTargetLocation = serialized->get_bool(AddTargetLocation_type_id); 
	}

	[[nodiscard]] auto
	WeakspotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeakspotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeakspotPrius> {
		if (incoming_type_id == WeakspotPrius::type_id) {
			return std::make_shared<WeakspotPrius>(serialized);
		}

		auto NefariousFinaleWeakspotPrius_ptr = NefariousFinaleWeakspotPrius::from_substruct(incoming_type_id, serialized);
		if (NefariousFinaleWeakspotPrius_ptr != nullptr) {
			return NefariousFinaleWeakspotPrius_ptr;
		}

		auto WeakspotDestructiblePrius_ptr = WeakspotDestructiblePrius::from_substruct(incoming_type_id, serialized);
		if (WeakspotDestructiblePrius_ptr != nullptr) {
			return WeakspotDestructiblePrius_ptr;
		}

		auto WeakspotRadiusBasedPrius_ptr = WeakspotRadiusBasedPrius::from_substruct(incoming_type_id, serialized);
		if (WeakspotRadiusBasedPrius_ptr != nullptr) {
			return WeakspotRadiusBasedPrius_ptr;
		}

		auto WeakspotFilteredPrius_ptr = WeakspotFilteredPrius::from_substruct(incoming_type_id, serialized);
		if (WeakspotFilteredPrius_ptr != nullptr) {
			return WeakspotFilteredPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
