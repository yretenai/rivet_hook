// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeakspotFilteredPrius.hpp>

namespace rivet::ddl::generated {
	WeakspotFilteredPrius::WeakspotFilteredPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeakspotPrius(serialized) {

	}

	[[nodiscard]] auto
	WeakspotFilteredPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeakspotFilteredPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeakspotFilteredPrius> {
		if (incoming_type_id == WeakspotFilteredPrius::type_id) {
			return std::make_shared<WeakspotFilteredPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
