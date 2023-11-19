// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FallingRespawnVolumePrius.hpp>

namespace rivet::ddl::generated {
	FallingRespawnVolumePrius::FallingRespawnVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RespawnLocation = serialized->get_uint64(RespawnLocation_type_id); 
	}

	[[nodiscard]] auto
	FallingRespawnVolumePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FallingRespawnVolumePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FallingRespawnVolumePrius> {
		if (incoming_type_id == FallingRespawnVolumePrius::type_id) {
			return std::make_shared<FallingRespawnVolumePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated