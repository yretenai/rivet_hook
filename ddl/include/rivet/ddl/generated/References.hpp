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
	struct RIVET_DDL_SHARED References : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "References";
		constexpr const static rivet::rivet_type_id type_id = 0x442873a5;

		constexpr const static std::string_view AutoLoad_type_name = "AutoLoad";
		constexpr const static rivet::rivet_type_id AutoLoad_type_id = 0x129306c4;
		constexpr const static std::string_view ManualLoad_type_name = "ManualLoad";
		constexpr const static rivet::rivet_type_id ManualLoad_type_id = 0x1796b3e1;
		constexpr const static std::string_view AutoLoadWwise_type_name = "AutoLoadWwise";
		constexpr const static rivet::rivet_type_id AutoLoadWwise_type_id = 0xbc48a30e;
		constexpr const static std::string_view ManualLoadWwise_type_name = "ManualLoadWwise";
		constexpr const static rivet::rivet_type_id ManualLoadWwise_type_id = 0xe4798b7c; 

		explicit References() = default;
		explicit References([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> AutoLoad {};
		std::vector<std::string_view> ManualLoad {};
		std::vector<std::string_view> AutoLoadWwise {};
		std::vector<std::string_view> ManualLoadWwise {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<References>;
	};
} // namespace rivet::ddl::generated

// clang-format on