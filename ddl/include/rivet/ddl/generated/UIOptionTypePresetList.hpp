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

#include <rivet/ddl/generated/UIOptionTypeSettingList.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UIOptionTypePresetList : UIOptionTypeSettingList {
		constexpr const static std::string_view type_name = "UIOptionTypePresetList";
		constexpr const static rivet::rivet_type_id type_id = 0x21a1ed42;

		constexpr const static std::string_view DisableChildrenIndex_type_name = "DisableChildrenIndex";
		constexpr const static rivet::rivet_type_id DisableChildrenIndex_type_id = 0xd7d1fe28; 

		explicit UIOptionTypePresetList() = default;
		explicit UIOptionTypePresetList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		int32_t DisableChildrenIndex {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIOptionTypePresetList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
