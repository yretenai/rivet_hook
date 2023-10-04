// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlavorAnimIndex.hpp> 

#include <rivet/ddl/generated/FlavorCycleConfig.hpp>

namespace rivet::ddl::generated {
	FlavorCycleConfig::FlavorCycleConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CycleIndices = serialized->unwrap_into_many<rivet::ddl::generated::FlavorAnimIndex>(CycleIndices_type_id); 
	}

	[[nodiscard]] auto
	FlavorCycleConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlavorCycleConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlavorCycleConfig> {
		if (incoming_type_id == FlavorCycleConfig::type_id) {
			return std::make_shared<FlavorCycleConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
