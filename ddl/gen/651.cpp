// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IconMapData.hpp>

namespace rivet::ddl::generated {
	IconMapData::IconMapData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Icon = serialized->get_string(Icon_type_id);
		MarkupText = serialized->get_string(MarkupText_type_id);
		Width = serialized->get_int32(Width_type_id);
		Height = serialized->get_int32(Height_type_id);
		MinHeight = serialized->get_int32(MinHeight_type_id);
		MaxHeight = serialized->get_int32(MaxHeight_type_id);
		Vspace = serialized->get_int32(Vspace_type_id); 
	}

	auto
	IconMapData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	IconMapData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IconMapData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IconMapData> {
		if (incoming_type_id == IconMapData::type_id) {
			return std::make_shared<IconMapData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated