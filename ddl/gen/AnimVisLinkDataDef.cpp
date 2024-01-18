// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AnimVisLinkDataDef.hpp>

namespace rivet::ddl::generated {
	AnimVisLinkDataDef::AnimVisLinkDataDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Type = serialized->get_uint16(Type_type_id, 0u);
		Id = serialized->get_uint64(Id_type_id, 0ull);
		DataLength = serialized->get_uint32(DataLength_type_id, 0u);
		Data = serialized->get_string(Data_type_id, {}); 
	}

	[[nodiscard]] auto
	AnimVisLinkDataDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AnimVisLinkDataDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AnimVisLinkDataDef> {
		if (incoming_type_id == AnimVisLinkDataDef::type_id) {
			return std::make_shared<AnimVisLinkDataDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
