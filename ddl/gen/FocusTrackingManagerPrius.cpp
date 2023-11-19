// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GameFocusTrackingManagerPrius.hpp> 

#include <rivet/ddl/generated/FocusTrackingManagerPrius.hpp>

namespace rivet::ddl::generated {
	FocusTrackingManagerPrius::FocusTrackingManagerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Config = serialized->get_string(Config_type_id); 
	}

	[[nodiscard]] auto
	FocusTrackingManagerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FocusTrackingManagerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FocusTrackingManagerPrius> {
		if (incoming_type_id == FocusTrackingManagerPrius::type_id) {
			return std::make_shared<FocusTrackingManagerPrius>(serialized);
		}

		auto GameFocusTrackingManagerPrius_ptr = GameFocusTrackingManagerPrius::from_substruct(incoming_type_id, serialized);
		if (GameFocusTrackingManagerPrius_ptr != nullptr) {
			return GameFocusTrackingManagerPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated