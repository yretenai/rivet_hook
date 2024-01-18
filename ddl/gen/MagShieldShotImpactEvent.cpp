// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MagShieldShotImpactEvent.hpp>

namespace rivet::ddl::generated {
	MagShieldShotImpactEvent::MagShieldShotImpactEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {
		ImpactingShotAsset = serialized->get_uint64(ImpactingShotAsset_type_id, 0ull); 
	}

	[[nodiscard]] auto
	MagShieldShotImpactEvent::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MagShieldShotImpactEvent::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MagShieldShotImpactEvent> {
		if (incoming_type_id == MagShieldShotImpactEvent::type_id) {
			return std::make_shared<MagShieldShotImpactEvent>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
