// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLAABB.hpp>
#include <rivet/ddl/generated/DDLMatrix4.hpp> 

#include <rivet/ddl/generated/SceneObjectEngineItem.hpp>

namespace rivet::ddl::generated {
	SceneObjectEngineItem::SceneObjectEngineItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SceneObjectType = serialized->get_enum<rivet::ddl::generated::xd90ff0f4>(SceneObjectType_type_id, rivet::ddl::generated::xd90ff0f4_values, rivet::ddl::generated::xd90ff0f4::Invalid);
		WorldMatrix = serialized->unwrap_into<rivet::ddl::generated::DDLMatrix4>(WorldMatrix_type_id);
		ObjSpaceBounds = serialized->unwrap_into<rivet::ddl::generated::DDLAABB>(ObjSpaceBounds_type_id);
		CreatedBy = serialized->get_enum<rivet::ddl::generated::xcc3b3a79>(CreatedBy_type_id, rivet::ddl::generated::xcc3b3a79_values, rivet::ddl::generated::xcc3b3a79::Editor);
		ChangedBy = serialized->get_enum<rivet::ddl::generated::xcc3b3a79>(ChangedBy_type_id, rivet::ddl::generated::xcc3b3a79_values, rivet::ddl::generated::xcc3b3a79::Editor);
		EngineId = serialized->get_uint64(EngineId_type_id, 0ull); 
	}

	[[nodiscard]] auto
	SceneObjectEngineItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SceneObjectEngineItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SceneObjectEngineItem> {
		if (incoming_type_id == SceneObjectEngineItem::type_id) {
			return std::make_shared<SceneObjectEngineItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
