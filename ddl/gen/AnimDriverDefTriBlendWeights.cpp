// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimDriverDefTriBlendWeights.hpp>

namespace rivet::ddl::generated {
	AnimDriverDefTriBlendWeights::AnimDriverDefTriBlendWeights([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		a = serialized->get_float(a_type_id, 0.000000f);
		b = serialized->get_float(b_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	AnimDriverDefTriBlendWeights::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimDriverDefTriBlendWeights::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimDriverDefTriBlendWeights> {
		if (incoming_type_id == AnimDriverDefTriBlendWeights::type_id) {
			return std::make_shared<AnimDriverDefTriBlendWeights>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
