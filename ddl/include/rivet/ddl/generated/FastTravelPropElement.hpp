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
	struct FastTravelAnimElement; 

	struct RIVET_DDL_SHARED FastTravelPropElement : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "FastTravelPropElement";
		constexpr const static rivet::rivet_type_id type_id = 0x1e262acd;

		constexpr const static std::string_view PropAsset_type_name = "PropAsset";
		constexpr const static rivet::rivet_type_id PropAsset_type_id = 0x9b26d12;
		constexpr const static std::string_view Animations_type_name = "Animations";
		constexpr const static rivet::rivet_type_id Animations_type_id = 0x4fd05d49; 

		explicit FastTravelPropElement() = default;
		explicit FastTravelPropElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view PropAsset {};
		std::vector<std::shared_ptr<rivet::ddl::generated::FastTravelAnimElement>> Animations {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FastTravelPropElement>;
	};
} // namespace rivet::ddl::generated

// clang-format on
