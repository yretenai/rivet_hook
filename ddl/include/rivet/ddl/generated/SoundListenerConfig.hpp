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
	struct SoundListenerBoomProperties;
	struct SoundListenerPriority; 

	struct RIVET_DDL_SHARED SoundListenerConfig : ConfigBase {
		constexpr const static std::string_view type_name = "SoundListenerConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x1bb0b1e5;

		constexpr const static std::string_view BoomProperties_type_name = "BoomProperties";
		constexpr const static rivet::rivet_type_id BoomProperties_type_id = 0x2d41beab;
		constexpr const static std::string_view ListenerPriorities_type_name = "ListenerPriorities";
		constexpr const static rivet::rivet_type_id ListenerPriorities_type_id = 0xcb62563c; 

		explicit SoundListenerConfig() = default;
		explicit SoundListenerConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::SoundListenerBoomProperties> BoomProperties {};
		std::vector<std::shared_ptr<rivet::ddl::generated::SoundListenerPriority>> ListenerPriorities {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SoundListenerConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
