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

#include <rivet/ddl/generated/AimAssistCurveData.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AimAssistBoxProcessData : AimAssistCurveData {
		constexpr const static std::string_view type_name = "AimAssistBoxProcessData";
		constexpr const static rivet::rivet_type_id type_id = 0xe1722c0;

		constexpr const static std::string_view BoxSlideFactor_type_name = "BoxSlideFactor";
		constexpr const static rivet::rivet_type_id BoxSlideFactor_type_id = 0xe9abd634; 

		explicit AimAssistBoxProcessData() = default;
		explicit AimAssistBoxProcessData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float BoxSlideFactor {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimAssistBoxProcessData>;
	};
} // namespace rivet::ddl::generated

// clang-format on
