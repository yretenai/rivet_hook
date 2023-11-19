// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimSetSessionData.hpp>

namespace rivet::ddl::generated {
	AnimSetSessionData::AnimSetSessionData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Selection = serialized->get_uint64s(Selection_type_id); 
	}

	[[nodiscard]] auto
	AnimSetSessionData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimSetSessionData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimSetSessionData> {
		if (incoming_type_id == AnimSetSessionData::type_id) {
			return std::make_shared<AnimSetSessionData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated