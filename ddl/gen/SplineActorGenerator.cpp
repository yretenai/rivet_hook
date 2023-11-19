// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SplineActorGenerator.hpp>

namespace rivet::ddl::generated {
	SplineActorGenerator::SplineActorGenerator([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SplineGenerator(serialized) {
		GenActor = serialized->get_enum<rivet::ddl::generated::x7e4a5355>(GenActor_type_id, rivet::ddl::generated::x7e4a5355_values);
		Actor = serialized->get_string(Actor_type_id); 
	}

	[[nodiscard]] auto
	SplineActorGenerator::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SplineActorGenerator::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SplineActorGenerator> {
		if (incoming_type_id == SplineActorGenerator::type_id) {
			return std::make_shared<SplineActorGenerator>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated