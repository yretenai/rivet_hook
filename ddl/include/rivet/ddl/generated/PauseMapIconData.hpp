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

#include <rivet/ddl/generated/enums/xf0177ef8.hpp>
#include <rivet/ddl/generated/enums/x8578b610.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED PauseMapIconData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "PauseMapIconData";
		constexpr const static rivet::rivet_type_id type_id = 0xfce0cbd2;

		constexpr const static std::string_view Type_type_name = "Type";
		constexpr const static rivet::rivet_type_id Type_type_id = 0xbc4e9799;
		constexpr const static std::string_view SymbolType_type_name = "SymbolType";
		constexpr const static rivet::rivet_type_id SymbolType_type_id = 0x86cd9534;
		constexpr const static std::string_view Texture_type_name = "Texture";
		constexpr const static rivet::rivet_type_id Texture_type_id = 0x838c6e4a;
		constexpr const static std::string_view Label_type_name = "Label";
		constexpr const static rivet::rivet_type_id Label_type_id = 0x17f49c29; 

		explicit PauseMapIconData() = default;
		explicit PauseMapIconData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xf0177ef8 Type {};
		rivet::ddl::generated::x8578b610 SymbolType {};
		std::string_view Texture {};
		std::string_view Label {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PauseMapIconData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
