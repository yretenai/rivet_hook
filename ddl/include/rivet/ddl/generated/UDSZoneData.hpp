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
	struct DDLVector3; 

	struct RIVET_DDL_SHARED UDSZoneData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "UDSZoneData";
		constexpr const static rivet::rivet_type_id type_id = 0x431102bb;

		constexpr const static std::string_view ZoneId_type_name = "ZoneId";
		constexpr const static rivet::rivet_type_id ZoneId_type_id = 0xc0e0f909;
		constexpr const static std::string_view MapBottomLeft_type_name = "MapBottomLeft";
		constexpr const static rivet::rivet_type_id MapBottomLeft_type_id = 0x7ebe0720;
		constexpr const static std::string_view MapTopRight_type_name = "MapTopRight";
		constexpr const static rivet::rivet_type_id MapTopRight_type_id = 0xa704f66f; 

		explicit UDSZoneData() = default;
		explicit UDSZoneData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ZoneId {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> MapBottomLeft {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> MapTopRight {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSZoneData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
