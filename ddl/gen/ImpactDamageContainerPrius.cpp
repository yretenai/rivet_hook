// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ImpactDamageContainerPrius.hpp>

namespace rivet::ddl::generated {
	ImpactDamageContainerPrius::ImpactDamageContainerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Amount = serialized->get_float(Amount_type_id, 100.000000f);
		IsMultiplier = serialized->get_bool(IsMultiplier_type_id, false);
		PinDeath = serialized->get_bool(PinDeath_type_id, true); 
	}

	[[nodiscard]] auto
	ImpactDamageContainerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ImpactDamageContainerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ImpactDamageContainerPrius> {
		if (incoming_type_id == ImpactDamageContainerPrius::type_id) {
			return std::make_shared<ImpactDamageContainerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
