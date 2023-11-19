// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/LightEngineItem.hpp>

namespace rivet::ddl::generated {
	LightEngineItem::LightEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Color = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(Color_type_id);
		LightType = serialized->get_enum<rivet::ddl::generated::LightType>(LightType_type_id, rivet::ddl::generated::LightType_values); 
	}

	[[nodiscard]] auto
	LightEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LightEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LightEngineItem> {
		if (incoming_type_id == LightEngineItem::type_id) {
			return std::make_shared<LightEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated