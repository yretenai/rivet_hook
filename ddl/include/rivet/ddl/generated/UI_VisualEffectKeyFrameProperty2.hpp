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

#include <rivet/ddl/generated/enums/RangeStyle.hpp> 

namespace rivet::ddl::generated {
	struct UI_VisualEffectKeyFrameYValues2; 

	struct RIVET_DDL_SHARED UI_VisualEffectKeyFrameProperty2 : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UI_VisualEffectKeyFrameProperty2";
		constexpr static rivet::rivet_type_id type_id = 0xaad5b672;

		constexpr static std::string_view RangeStyle_type_name = "RangeStyle";
		constexpr static rivet::rivet_type_id RangeStyle_type_id = 0x660fc875;
		constexpr static std::string_view X_type_name = "X";
		constexpr static rivet::rivet_type_id X_type_id = 0x5e33418d;
		constexpr static std::string_view Y_type_name = "Y";
		constexpr static rivet::rivet_type_id Y_type_id = 0x2934711b; 

		explicit UI_VisualEffectKeyFrameProperty2() = default;
		explicit UI_VisualEffectKeyFrameProperty2([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::RangeStyle RangeStyle {};
		float X {};
		std::shared_ptr<rivet::ddl::generated::UI_VisualEffectKeyFrameYValues2> Y {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_VisualEffectKeyFrameProperty2>;
	};
} // namespace rivet::ddl::generated

// clang-format on