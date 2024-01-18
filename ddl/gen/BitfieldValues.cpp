// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BitfieldValues.hpp>

namespace rivet::ddl::generated {
	BitfieldValues::BitfieldValues([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		NoDefault = serialized->get_bitset<rivet::ddl::generated::BitsB>(NoDefault_type_id, rivet::ddl::generated::BitsB_values, 0u);
		SingleDefault = serialized->get_bitset<rivet::ddl::generated::x1ea7317b>(SingleDefault_type_id, rivet::ddl::generated::x1ea7317b_values, 2u);
		MultiValue = serialized->get_bitset<rivet::ddl::generated::x2c9c3cc7>(MultiValue_type_id, rivet::ddl::generated::x2c9c3cc7_values, 3u); 
	}

	[[nodiscard]] auto
	BitfieldValues::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BitfieldValues::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BitfieldValues> {
		if (incoming_type_id == BitfieldValues::type_id) {
			return std::make_shared<BitfieldValues>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
