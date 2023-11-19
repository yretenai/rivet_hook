// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HammerCrankTargetIdle.hpp>

namespace rivet::ddl::generated {
	HammerCrankTargetIdle::HammerCrankTargetIdle([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	HammerCrankTargetIdle::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HammerCrankTargetIdle::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HammerCrankTargetIdle> {
		if (incoming_type_id == HammerCrankTargetIdle::type_id) {
			return std::make_shared<HammerCrankTargetIdle>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated