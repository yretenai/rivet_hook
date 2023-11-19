// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct PrefabRenderFlags;
	struct VertexPaintNode;
	struct ImpostorAttributes;
	struct VarNode;
	struct ActorGroupNode;
	struct NodeGraphContents;
	struct SceneNode;
	struct VaultMetaData; 

	struct RIVET_DDL_SHARED PrefabDef : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PrefabDef";
		constexpr static rivet::rivet_type_id type_id = 0x83b44e79;

		constexpr static std::string_view VaultMetaData_type_name = "VaultMetaData";
		constexpr static rivet::rivet_type_id VaultMetaData_type_id = 0x37889aa;
		constexpr static std::string_view IconPath_type_name = "IconPath";
		constexpr static rivet::rivet_type_id IconPath_type_id = 0xbf5b007f;
		constexpr static std::string_view SceneNodes_type_name = "SceneNodes";
		constexpr static rivet::rivet_type_id SceneNodes_type_id = 0x41496fde;
		constexpr static std::string_view ActorGroups_type_name = "ActorGroups";
		constexpr static rivet::rivet_type_id ActorGroups_type_id = 0xd4a16a95;
		constexpr static std::string_view MainScriptGraphId_type_name = "MainScriptGraphId";
		constexpr static rivet::rivet_type_id MainScriptGraphId_type_id = 0x98b21bed;
		constexpr static std::string_view ScriptGraphs_type_name = "ScriptGraphs";
		constexpr static rivet::rivet_type_id ScriptGraphs_type_id = 0xb6beea44;
		constexpr static std::string_view VarNodes_type_name = "VarNodes";
		constexpr static rivet::rivet_type_id VarNodes_type_id = 0x84e9cc70;
		constexpr static std::string_view VertexPaintNodes_type_name = "VertexPaintNodes";
		constexpr static rivet::rivet_type_id VertexPaintNodes_type_id = 0xb9ed55e1;
		constexpr static std::string_view ImpostorAttributes_type_name = "ImpostorAttributes";
		constexpr static rivet::rivet_type_id ImpostorAttributes_type_id = 0xfd931cb7;
		constexpr static std::string_view RenderFlags_type_name = "RenderFlags";
		constexpr static rivet::rivet_type_id RenderFlags_type_id = 0x2459666d;
		constexpr static std::string_view FixupTable_type_name = "FixupTable";
		constexpr static rivet::rivet_type_id FixupTable_type_id = 0x2f885ab0; 

		explicit PrefabDef() = default;
		explicit PrefabDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::VaultMetaData> VaultMetaData {};
		std::string_view IconPath {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SceneNode>> SceneNodes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::ActorGroupNode>> ActorGroups {};
		uint64_t MainScriptGraphId {};
		std::vector<std::shared_ptr<rivet::ddl::generated::NodeGraphContents>> ScriptGraphs {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VarNode>> VarNodes {};
		std::vector<std::shared_ptr<rivet::ddl::generated::VertexPaintNode>> VertexPaintNodes {};
		std::shared_ptr<rivet::ddl::generated::ImpostorAttributes> ImpostorAttributes {};
		std::shared_ptr<rivet::ddl::generated::PrefabRenderFlags> RenderFlags {};
		std::vector<uint64_t> FixupTable {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PrefabDef>;
	};
} // namespace rivet::ddl::generated

// clang-format on