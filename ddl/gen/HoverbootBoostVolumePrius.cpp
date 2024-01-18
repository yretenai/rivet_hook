// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HoverbootBoostVolumePrius.hpp>

namespace rivet::ddl::generated {
	HoverbootBoostVolumePrius::HoverbootBoostVolumePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		IsOmnidirectional = serialized->get_bool(IsOmnidirectional_type_id, false);
		IsJump = serialized->get_bool(IsJump_type_id, false);
		JumpTargetActor = serialized->get_uint64(JumpTargetActor_type_id, 0ull); 
	}

	[[nodiscard]] auto
	HoverbootBoostVolumePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HoverbootBoostVolumePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HoverbootBoostVolumePrius> {
		if (incoming_type_id == HoverbootBoostVolumePrius::type_id) {
			return std::make_shared<HoverbootBoostVolumePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
