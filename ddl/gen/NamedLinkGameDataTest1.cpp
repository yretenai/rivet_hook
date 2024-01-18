// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NamedLinkGameDataTest1.hpp>

namespace rivet::ddl::generated {
	NamedLinkGameDataTest1::NamedLinkGameDataTest1([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): NamedLinkGameDataBase(serialized) {
		testValue1 = serialized->get_int32(testValue1_type_id, 0u); 
	}

	[[nodiscard]] auto
	NamedLinkGameDataTest1::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NamedLinkGameDataTest1::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NamedLinkGameDataTest1> {
		if (incoming_type_id == NamedLinkGameDataTest1::type_id) {
			return std::make_shared<NamedLinkGameDataTest1>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
