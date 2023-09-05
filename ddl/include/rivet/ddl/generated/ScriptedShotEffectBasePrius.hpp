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
	struct ScriptedShotConditionalBasePrius; 

	struct RIVET_DDL_SHARED ScriptedShotEffectBasePrius : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "ScriptedShotEffectBasePrius";
		constexpr const static rivet::rivet_type_id type_id = 0xd15cc6;

		constexpr const static std::string_view EffectName_type_name = "EffectName";
		constexpr const static rivet::rivet_type_id EffectName_type_id = 0xb266fef4;
		constexpr const static std::string_view Condition_type_name = "Condition";
		constexpr const static rivet::rivet_type_id Condition_type_id = 0x3f2b174f; 

		explicit ScriptedShotEffectBasePrius() = default;
		explicit ScriptedShotEffectBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view EffectName {};
		std::shared_ptr<rivet::ddl::generated::ScriptedShotConditionalBasePrius> Condition {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ScriptedShotEffectBasePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on