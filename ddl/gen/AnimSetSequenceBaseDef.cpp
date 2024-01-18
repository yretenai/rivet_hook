// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimSetSequenceBaseDef.hpp>

namespace rivet::ddl::generated {
	AnimSetSequenceBaseDef::AnimSetSequenceBaseDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Time = serialized->get_float(Time_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	AnimSetSequenceBaseDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimSetSequenceBaseDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimSetSequenceBaseDef> {
		if (incoming_type_id == AnimSetSequenceBaseDef::type_id) {
			return std::make_shared<AnimSetSequenceBaseDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
