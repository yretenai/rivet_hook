// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClankPuzzleCameraExcluderPrius.hpp>

namespace rivet::ddl::generated {
	ClankPuzzleCameraExcluderPrius::ClankPuzzleCameraExcluderPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		RemoveCameraCollision = serialized->get_bool(RemoveCameraCollision_type_id); 
	}

	[[nodiscard]] auto
	ClankPuzzleCameraExcluderPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClankPuzzleCameraExcluderPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleCameraExcluderPrius> {
		if (incoming_type_id == ClankPuzzleCameraExcluderPrius::type_id) {
			return std::make_shared<ClankPuzzleCameraExcluderPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated