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

#include <rivet/ddl/generated/enums/x6d501980.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CritterLocationMaxExceededDevstatsEvent : EventBase {
		constexpr static std::string_view type_name = "CritterLocationMaxExceededDevstatsEvent";
		constexpr static rivet::rivet_type_id type_id = 0x99794ae2;

		constexpr static std::string_view EventId_type_name = "EventId";
		constexpr static rivet::rivet_type_id EventId_type_id = 0x2ac4d854;
		constexpr static std::string_view Level_type_name = "Level";
		constexpr static rivet::rivet_type_id Level_type_id = 0x83b900d2;
		constexpr static std::string_view LocationType_type_name = "LocationType";
		constexpr static rivet::rivet_type_id LocationType_type_id = 0xc3db52f8; 

		explicit CritterLocationMaxExceededDevstatsEvent() = default;
		explicit CritterLocationMaxExceededDevstatsEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view EventId {};
		std::string_view Level {};
		rivet::ddl::generated::x6d501980 LocationType {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CritterLocationMaxExceededDevstatsEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on