// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FadeOverTimePrius.hpp>

namespace rivet::ddl::generated {
	FadeOverTimePrius::FadeOverTimePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SlotIndex = serialized->get_uint8(SlotIndex_type_id, 0u);
		LifeTime = serialized->get_float(LifeTime_type_id, 0.000000f);
		FadeTime = serialized->get_float(FadeTime_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	FadeOverTimePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FadeOverTimePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FadeOverTimePrius> {
		if (incoming_type_id == FadeOverTimePrius::type_id) {
			return std::make_shared<FadeOverTimePrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
