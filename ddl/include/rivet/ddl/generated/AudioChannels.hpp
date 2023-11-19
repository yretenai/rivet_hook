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
	struct RIVET_DDL_SHARED AudioChannels : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "AudioChannels";
		constexpr static rivet::rivet_type_id type_id = 0x7ee48ad4;

		constexpr static std::string_view Left_type_name = "Left";
		constexpr static rivet::rivet_type_id Left_type_id = 0x4af727d8;
		constexpr static std::string_view Center_type_name = "Center";
		constexpr static rivet::rivet_type_id Center_type_id = 0x7e88a543;
		constexpr static std::string_view Right_type_name = "Right";
		constexpr static rivet::rivet_type_id Right_type_id = 0xad99b9d5;
		constexpr static std::string_view LeftSurround_type_name = "LeftSurround";
		constexpr static rivet::rivet_type_id LeftSurround_type_id = 0xe5e9b9b8;
		constexpr static std::string_view RightSurround_type_name = "RightSurround";
		constexpr static rivet::rivet_type_id RightSurround_type_id = 0x6911d4ed;
		constexpr static std::string_view LowFrequency_type_name = "LowFrequency";
		constexpr static rivet::rivet_type_id LowFrequency_type_id = 0x3d0d67; 

		explicit AudioChannels() = default;
		explicit AudioChannels([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Left {};
		std::string_view Center {};
		std::string_view Right {};
		std::string_view LeftSurround {};
		std::string_view RightSurround {};
		std::string_view LowFrequency {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AudioChannels>;
	};
} // namespace rivet::ddl::generated

// clang-format on