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

#include <rivet/ddl/generated/enums/KnockbackLevels.hpp>
#include <rivet/ddl/generated/enums/xf7b2e7be.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED BotReactionBucket : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "BotReactionBucket";
		constexpr const static rivet::rivet_type_id type_id = 0x3f93f562;

		constexpr const static std::string_view Comment_type_name = "Comment";
		constexpr const static rivet::rivet_type_id Comment_type_id = 0x959e3154;
		constexpr const static std::string_view MinKnockbackLevel_type_name = "MinKnockbackLevel";
		constexpr const static rivet::rivet_type_id MinKnockbackLevel_type_id = 0xc137ac71;
		constexpr const static std::string_view MaxKnockbackLevel_type_name = "MaxKnockbackLevel";
		constexpr const static rivet::rivet_type_id MaxKnockbackLevel_type_id = 0xd4bc7883;
		constexpr const static std::string_view KnockbackFillThreshhold_type_name = "KnockbackFillThreshhold";
		constexpr const static rivet::rivet_type_id KnockbackFillThreshhold_type_id = 0x7ef7cdad;
		constexpr const static std::string_view InitialFill_type_name = "InitialFill";
		constexpr const static rivet::rivet_type_id InitialFill_type_id = 0x2f4765cf;
		constexpr const static std::string_view ReactCooldown_type_name = "ReactCooldown";
		constexpr const static rivet::rivet_type_id ReactCooldown_type_id = 0x1ea68374;
		constexpr const static std::string_view RefillRate_type_name = "RefillRate";
		constexpr const static rivet::rivet_type_id RefillRate_type_id = 0xa9301d7d;
		constexpr const static std::string_view EmptyLowerBucketsOnReact_type_name = "EmptyLowerBucketsOnReact";
		constexpr const static rivet::rivet_type_id EmptyLowerBucketsOnReact_type_id = 0x1c14304;
		constexpr const static std::string_view Reaction_type_name = "Reaction";
		constexpr const static rivet::rivet_type_id Reaction_type_id = 0x5ed6ba87; 

		explicit BotReactionBucket() = default;
		explicit BotReactionBucket([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Comment {};
		rivet::ddl::generated::KnockbackLevels MinKnockbackLevel {};
		rivet::ddl::generated::KnockbackLevels MaxKnockbackLevel {};
		float KnockbackFillThreshhold {};
		float InitialFill {};
		float ReactCooldown {};
		float RefillRate {};
		bool EmptyLowerBucketsOnReact {};
		rivet::ddl::generated::xf7b2e7be Reaction {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BotReactionBucket>;
	};
} // namespace rivet::ddl::generated

// clang-format on
