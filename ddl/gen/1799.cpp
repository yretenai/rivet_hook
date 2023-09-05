// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ZoomData.hpp> 

#include <rivet/ddl/generated/ZoomConfig.hpp>

namespace rivet::ddl::generated {
	ZoomConfig::ZoomConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		ZoomLevels = serialized->unwrap_into_many<rivet::ddl::generated::ZoomData>(ZoomLevels_type_id); 
	}

	auto
	ZoomConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ZoomConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ZoomConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ZoomConfig> {
		if (incoming_type_id == ZoomConfig::type_id) {
			return std::make_shared<ZoomConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated