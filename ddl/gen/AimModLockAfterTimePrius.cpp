// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AimModLockAfterTimePrius.hpp>

namespace rivet::ddl::generated {
	AimModLockAfterTimePrius::AimModLockAfterTimePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AimModifierPrius(serialized) {
		LockTime = serialized->get_float(LockTime_type_id);
		LockFromBeginningIfOffScreen = serialized->get_bool(LockFromBeginningIfOffScreen_type_id); 
	}

	[[nodiscard]] auto
	AimModLockAfterTimePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimModLockAfterTimePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModLockAfterTimePrius> {
		if (incoming_type_id == AimModLockAfterTimePrius::type_id) {
			return std::make_shared<AimModLockAfterTimePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated