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
	struct RIVET_DDL_SHARED WaterImpulseData : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "WaterImpulseData";
		constexpr const static rivet::rivet_type_id type_id = 0x7d7ff983;

		constexpr const static std::string_view Radius_type_name = "Radius";
		constexpr const static rivet::rivet_type_id Radius_type_id = 0x504203d;
		constexpr const static std::string_view LocatorName_type_name = "LocatorName";
		constexpr const static rivet::rivet_type_id LocatorName_type_id = 0x5814524d; 

		explicit WaterImpulseData() = default;
		explicit WaterImpulseData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float Radius {};
		std::string_view LocatorName {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WaterImpulseData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
