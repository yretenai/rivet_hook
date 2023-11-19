// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AmbientAimingShooterPrius.hpp> 

#include <rivet/ddl/generated/AmbientShooterPrius.hpp>

namespace rivet::ddl::generated {
	AmbientShooterPrius::AmbientShooterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ShotSelection = serialized->get_enum<rivet::ddl::generated::x632591ba>(ShotSelection_type_id, rivet::ddl::generated::x632591ba_values);
		OnlyFireForward = serialized->get_bool(OnlyFireForward_type_id); 
	}

	[[nodiscard]] auto
	AmbientShooterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AmbientShooterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmbientShooterPrius> {
		if (incoming_type_id == AmbientShooterPrius::type_id) {
			return std::make_shared<AmbientShooterPrius>(serialized);
		}

		auto AmbientAimingShooterPrius_ptr = AmbientAimingShooterPrius::from_substruct(incoming_type_id, serialized);
		if (AmbientAimingShooterPrius_ptr != nullptr) {
			return AmbientAimingShooterPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated