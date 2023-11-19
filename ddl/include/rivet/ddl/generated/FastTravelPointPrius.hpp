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
	struct FastTravelPointPropElement; 

	struct RIVET_DDL_SHARED FastTravelPointPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "FastTravelPointPrius";
		constexpr static rivet::rivet_type_id type_id = 0xc32dd629;

		constexpr static std::string_view MapPointName_type_name = "MapPointName";
		constexpr static rivet::rivet_type_id MapPointName_type_id = 0xedfb833f;
		constexpr static std::string_view CheckpointName_type_name = "CheckpointName";
		constexpr static rivet::rivet_type_id CheckpointName_type_id = 0x71d061f1;
		constexpr static std::string_view Props_type_name = "Props";
		constexpr static rivet::rivet_type_id Props_type_id = 0x422d6669; 

		explicit FastTravelPointPrius() = default;
		explicit FastTravelPointPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view MapPointName {};
		std::string_view CheckpointName {};
		std::vector<std::shared_ptr<rivet::ddl::generated::FastTravelPointPropElement>> Props {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FastTravelPointPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on