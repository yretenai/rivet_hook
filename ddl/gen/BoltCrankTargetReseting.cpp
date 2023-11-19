// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BoltCrankTargetReseting.hpp>

namespace rivet::ddl::generated {
	BoltCrankTargetReseting::BoltCrankTargetReseting([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EventBase(serialized) {

	}

	[[nodiscard]] auto
	BoltCrankTargetReseting::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BoltCrankTargetReseting::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BoltCrankTargetReseting> {
		if (incoming_type_id == BoltCrankTargetReseting::type_id) {
			return std::make_shared<BoltCrankTargetReseting>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated