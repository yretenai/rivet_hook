// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClankPuzzleHeavyGroundPrius.hpp>

namespace rivet::ddl::generated {
	ClankPuzzleHeavyGroundPrius::ClankPuzzleHeavyGroundPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Duration = serialized->get_float(Duration_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	ClankPuzzleHeavyGroundPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClankPuzzleHeavyGroundPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPuzzleHeavyGroundPrius> {
		if (incoming_type_id == ClankPuzzleHeavyGroundPrius::type_id) {
			return std::make_shared<ClankPuzzleHeavyGroundPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
