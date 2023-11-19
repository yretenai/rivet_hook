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

#include <rivet/ddl/generated/enums/xb7a407a9.hpp>
#include <rivet/ddl/generated/InteractLocationPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED InteractLocationAreaPrius : InteractLocationPrius {
		constexpr static std::string_view type_name = "InteractLocationAreaPrius";
		constexpr static rivet::rivet_type_id type_id = 0xbf76d5d4;

		constexpr static std::string_view AreaShape_type_name = "AreaShape";
		constexpr static rivet::rivet_type_id AreaShape_type_id = 0x16c10d4; 

		explicit InteractLocationAreaPrius() = default;
		explicit InteractLocationAreaPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xb7a407a9 AreaShape {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InteractLocationAreaPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on