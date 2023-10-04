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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct UIViewInfo; 

	struct RIVET_DDL_SHARED UIViewInfoConfig : ConfigBase {
		constexpr const static std::string_view type_name = "UIViewInfoConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x7ad2d6f8;

		constexpr const static std::string_view Views_type_name = "Views";
		constexpr const static rivet::rivet_type_id Views_type_id = 0x8a35046; 

		explicit UIViewInfoConfig() = default;
		explicit UIViewInfoConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::UIViewInfo>> Views {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIViewInfoConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on