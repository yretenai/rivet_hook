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
	struct RIVET_DDL_SHARED DDLVector3 : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "DDLVector3";
		constexpr const static rivet::rivet_type_id type_id = 0xde5d99a1;

		constexpr const static std::string_view X_type_name = "X";
		constexpr const static rivet::rivet_type_id X_type_id = 0x5e33418d;
		constexpr const static std::string_view Y_type_name = "Y";
		constexpr const static rivet::rivet_type_id Y_type_id = 0x2934711b;
		constexpr const static std::string_view Z_type_name = "Z";
		constexpr const static rivet::rivet_type_id Z_type_id = 0xb03d20a1; 

		explicit DDLVector3() = default;
		explicit DDLVector3([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float X {};
		float Y {};
		float Z {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DDLVector3>;
	};
} // namespace rivet::ddl::generated

// clang-format on