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

#include <rivet/ddl/generated/enums/x7627517a.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED DialogFinishedEvent : EventBase {
		constexpr static std::string_view type_name = "DialogFinishedEvent";
		constexpr static rivet::rivet_type_id type_id = 0x7e9a220b;

		constexpr static std::string_view PlayCountId_type_name = "PlayCountId";
		constexpr static rivet::rivet_type_id PlayCountId_type_id = 0x75b3e503;
		constexpr static std::string_view SoundEventName_type_name = "SoundEventName";
		constexpr static rivet::rivet_type_id SoundEventName_type_id = 0x9c64655a;
		constexpr static std::string_view Status_type_name = "Status";
		constexpr static rivet::rivet_type_id Status_type_id = 0x45782b7b; 

		explicit DialogFinishedEvent() = default;
		explicit DialogFinishedEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		uint16_t PlayCountId {};
		std::string_view SoundEventName {};
		rivet::ddl::generated::x7627517a Status {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DialogFinishedEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on