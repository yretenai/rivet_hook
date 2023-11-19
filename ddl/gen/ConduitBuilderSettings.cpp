// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConduitBuilderSettings.hpp>

namespace rivet::ddl::generated {
	ConduitBuilderSettings::ConduitBuilderSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxValueStackCount = serialized->get_int32(MaxValueStackCount_type_id);
		MaxResponseGraphDepth = serialized->get_int32(MaxResponseGraphDepth_type_id); 
	}

	[[nodiscard]] auto
	ConduitBuilderSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ConduitBuilderSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ConduitBuilderSettings> {
		if (incoming_type_id == ConduitBuilderSettings::type_id) {
			return std::make_shared<ConduitBuilderSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated