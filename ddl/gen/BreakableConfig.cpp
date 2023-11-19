// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BreakableConfig.hpp>

namespace rivet::ddl::generated {
	BreakableConfig::BreakableConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Gravity = serialized->get_float(Gravity_type_id);
		LinearDamping = serialized->get_float(LinearDamping_type_id);
		AngularDamping = serialized->get_float(AngularDamping_type_id);
		SuggestedMaxDebris = serialized->get_uint32(SuggestedMaxDebris_type_id); 
	}

	[[nodiscard]] auto
	BreakableConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BreakableConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BreakableConfig> {
		if (incoming_type_id == BreakableConfig::type_id) {
			return std::make_shared<BreakableConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated