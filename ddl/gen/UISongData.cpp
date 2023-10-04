// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/UISongLineData.hpp> 

#include <rivet/ddl/generated/UISongData.hpp>

namespace rivet::ddl::generated {
	UISongData::UISongData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Lines = serialized->unwrap_into_many<rivet::ddl::generated::UISongLineData>(Lines_type_id); 
	}

	[[nodiscard]] auto
	UISongData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	UISongData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UISongData> {
		if (incoming_type_id == UISongData::type_id) {
			return std::make_shared<UISongData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
