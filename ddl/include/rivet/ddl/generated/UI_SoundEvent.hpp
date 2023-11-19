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

#include <rivet/ddl/generated/enums/x6f4fd950.hpp> 

namespace rivet::ddl::generated {
	struct WwiseSoundEvent; 

	struct RIVET_DDL_SHARED UI_SoundEvent : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UI_SoundEvent";
		constexpr static rivet::rivet_type_id type_id = 0x90b28b83;

		constexpr static std::string_view Action_type_name = "Action";
		constexpr static rivet::rivet_type_id Action_type_id = 0x79b4c2f5;
		constexpr static std::string_view WwiseEvent_type_name = "WwiseEvent";
		constexpr static rivet::rivet_type_id WwiseEvent_type_id = 0xcebb3bc3;
		constexpr static std::string_view EventInitiator_type_name = "EventInitiator";
		constexpr static rivet::rivet_type_id EventInitiator_type_id = 0xfd9e2a20;
		constexpr static std::string_view TriggerLocator_type_name = "TriggerLocator";
		constexpr static rivet::rivet_type_id TriggerLocator_type_id = 0x85b17d52; 

		explicit UI_SoundEvent() = default;
		explicit UI_SoundEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x6f4fd950 Action {};
		std::shared_ptr<rivet::ddl::generated::WwiseSoundEvent> WwiseEvent {};
		std::string_view EventInitiator {};
		std::string_view TriggerLocator {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UI_SoundEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on