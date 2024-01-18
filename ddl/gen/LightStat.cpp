// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LightStat.hpp>

namespace rivet::ddl::generated {
	LightStat::LightStat([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LightCount = serialized->get_uint32(LightCount_type_id, 0u);
		ShadowCount = serialized->get_uint32(ShadowCount_type_id, 0u); 
	}

	[[nodiscard]] auto
	LightStat::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LightStat::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LightStat> {
		if (incoming_type_id == LightStat::type_id) {
			return std::make_shared<LightStat>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
