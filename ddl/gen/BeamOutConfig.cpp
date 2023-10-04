// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BeamOutConfig.hpp>

namespace rivet::ddl::generated {
	BeamOutConfig::BeamOutConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): IncinerateConfig(serialized) {

	}

	[[nodiscard]] auto
	BeamOutConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BeamOutConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BeamOutConfig> {
		if (incoming_type_id == BeamOutConfig::type_id) {
			return std::make_shared<BeamOutConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
