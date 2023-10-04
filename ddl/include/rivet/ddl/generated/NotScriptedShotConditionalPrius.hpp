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

#include <rivet/ddl/generated/ScriptedShotConditionalBasePrius.hpp> 

namespace rivet::ddl::generated {
	struct ScriptedShotConditionalBasePrius; 

	struct RIVET_DDL_SHARED NotScriptedShotConditionalPrius : ScriptedShotConditionalBasePrius {
		constexpr const static std::string_view type_name = "NotScriptedShotConditionalPrius";
		constexpr const static rivet::rivet_type_id type_id = 0xa63d8092;

		constexpr const static std::string_view Cond_type_name = "Cond";
		constexpr const static rivet::rivet_type_id Cond_type_id = 0xca6d2834; 

		explicit NotScriptedShotConditionalPrius() = default;
		explicit NotScriptedShotConditionalPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::ScriptedShotConditionalBasePrius> Cond {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NotScriptedShotConditionalPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on