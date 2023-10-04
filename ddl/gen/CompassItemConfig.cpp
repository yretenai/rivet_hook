// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CompassItemConfig.hpp>

namespace rivet::ddl::generated {
	CompassItemConfig::CompassItemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GameItemConfig(serialized) {

	}

	[[nodiscard]] auto
	CompassItemConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CompassItemConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CompassItemConfig> {
		if (incoming_type_id == CompassItemConfig::type_id) {
			return std::make_shared<CompassItemConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
