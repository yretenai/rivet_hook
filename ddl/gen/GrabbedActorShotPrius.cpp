// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GrabbedActorShotPrius.hpp>

namespace rivet::ddl::generated {
	GrabbedActorShotPrius::GrabbedActorShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): LobbedShotPrius(serialized) {

	}

	[[nodiscard]] auto
	GrabbedActorShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GrabbedActorShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GrabbedActorShotPrius> {
		if (incoming_type_id == GrabbedActorShotPrius::type_id) {
			return std::make_shared<GrabbedActorShotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
