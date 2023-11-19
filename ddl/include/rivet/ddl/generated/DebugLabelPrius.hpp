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

	struct RIVET_DDL_SHARED DebugLabelPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "DebugLabelPrius";
		constexpr static rivet::rivet_type_id type_id = 0x61228bce;

		constexpr static std::string_view Label_type_name = "Label";
		constexpr static rivet::rivet_type_id Label_type_id = 0x17f49c29;
		constexpr static std::string_view Color_type_name = "Color";
		constexpr static rivet::rivet_type_id Color_type_id = 0x7f058428;
		constexpr static std::string_view Enabled_type_name = "Enabled";
		constexpr static rivet::rivet_type_id Enabled_type_id = 0x5113d8bc; 

		explicit DebugLabelPrius() = default;
		explicit DebugLabelPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Label {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> Color {};
		bool Enabled {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DebugLabelPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on