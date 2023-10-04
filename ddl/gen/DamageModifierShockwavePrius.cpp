// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DamageModifierShockwaveExpandingRingPrius.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/DamageModifierShockwavePrius.hpp>

namespace rivet::ddl::generated {
	DamageModifierShockwavePrius::DamageModifierShockwavePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): DamageModifierOutgoingPrius(serialized) {
		RequestId = serialized->get_uint32(RequestId_type_id);
		CenterPosition = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(CenterPosition_type_id);
		UpVector = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(UpVector_type_id);
		Height = serialized->get_float(Height_type_id);
		InnerRadius = serialized->get_float(InnerRadius_type_id);
		OuterRadius = serialized->get_float(OuterRadius_type_id); 
	}

	[[nodiscard]] auto
	DamageModifierShockwavePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DamageModifierShockwavePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DamageModifierShockwavePrius> {
		if (incoming_type_id == DamageModifierShockwavePrius::type_id) {
			return std::make_shared<DamageModifierShockwavePrius>(serialized);
		}

		auto DamageModifierShockwaveExpandingRingPrius_ptr = DamageModifierShockwaveExpandingRingPrius::from_substruct(incoming_type_id, serialized);
		if (DamageModifierShockwaveExpandingRingPrius_ptr != nullptr) {
			return DamageModifierShockwaveExpandingRingPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated