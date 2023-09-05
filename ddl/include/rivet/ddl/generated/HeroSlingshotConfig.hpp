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

#include <rivet/ddl/generated/HeroHookshotConfig.hpp> 

namespace rivet::ddl::generated {
	struct HeroSlingshotSpinData; 

	struct RIVET_DDL_SHARED HeroSlingshotConfig : HeroHookshotConfig {
		constexpr const static std::string_view type_name = "HeroSlingshotConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xaaa1008a;

		constexpr const static std::string_view StandardSpin_type_name = "StandardSpin";
		constexpr const static rivet::rivet_type_id StandardSpin_type_id = 0xcfb47918;
		constexpr const static std::string_view TraversalChainSpin_type_name = "TraversalChainSpin";
		constexpr const static rivet::rivet_type_id TraversalChainSpin_type_id = 0x8e46b9d5; 

		explicit HeroSlingshotConfig() = default;
		explicit HeroSlingshotConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::HeroSlingshotSpinData> StandardSpin {};
		std::shared_ptr<rivet::ddl::generated::HeroSlingshotSpinData> TraversalChainSpin {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroSlingshotConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on