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
	struct UIGalleryEntry; 

	struct RIVET_DDL_SHARED UIGalleryConfig : ConfigBase {
		constexpr const static std::string_view type_name = "UIGalleryConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xf85a47e;

		constexpr const static std::string_view Entries_type_name = "Entries";
		constexpr const static rivet::rivet_type_id Entries_type_id = 0x2c12d0fd; 

		explicit UIGalleryConfig() = default;
		explicit UIGalleryConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::shared_ptr<rivet::ddl::generated::UIGalleryEntry>> Entries {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIGalleryConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
