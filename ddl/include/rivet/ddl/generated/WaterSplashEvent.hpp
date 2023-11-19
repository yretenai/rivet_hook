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

#include <rivet/ddl/generated/enums/x56b85d4c.hpp>
#include <rivet/ddl/generated/enums/x10b3c4cf.hpp>
#include <rivet/ddl/generated/EventBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED WaterSplashEvent : EventBase {
		constexpr static std::string_view type_name = "WaterSplashEvent";
		constexpr static rivet::rivet_type_id type_id = 0xe8ee569d;

		constexpr static std::string_view Size_type_name = "Size";
		constexpr static rivet::rivet_type_id Size_type_id = 0xc750e4da;
		constexpr static std::string_view Material_type_name = "Material";
		constexpr static rivet::rivet_type_id Material_type_id = 0x86bfc8e5; 

		explicit WaterSplashEvent() = default;
		explicit WaterSplashEvent([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x56b85d4c Size {};
		rivet::ddl::generated::x10b3c4cf Material {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WaterSplashEvent>;
	};
} // namespace rivet::ddl::generated

// clang-format on