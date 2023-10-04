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

#include <rivet/ddl/generated/ScriptedShotEffectBasePrius.hpp>
#include <rivet/ddl/generated/enums/x4891b54.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AttachToActorEffectPrius : ScriptedShotEffectBasePrius {
		constexpr const static std::string_view type_name = "AttachToActorEffectPrius";
		constexpr const static rivet::rivet_type_id type_id = 0x8dbdaa42;

		constexpr const static std::string_view ActorType_type_name = "ActorType";
		constexpr const static rivet::rivet_type_id ActorType_type_id = 0x1eb7640e;
		constexpr const static std::string_view ResetScriptedShotLifeTime_type_name = "ResetScriptedShotLifeTime";
		constexpr const static rivet::rivet_type_id ResetScriptedShotLifeTime_type_id = 0x8664041b;
		constexpr const static std::string_view NewLifeTime_type_name = "NewLifeTime";
		constexpr const static rivet::rivet_type_id NewLifeTime_type_id = 0x46741ea8;
		constexpr const static std::string_view DestroyOnBotDeath_type_name = "DestroyOnBotDeath";
		constexpr const static rivet::rivet_type_id DestroyOnBotDeath_type_id = 0xbf9f9307;
		constexpr const static std::string_view DestroyOnNonBotDeath_type_name = "DestroyOnNonBotDeath";
		constexpr const static rivet::rivet_type_id DestroyOnNonBotDeath_type_id = 0x2f074a2b;
		constexpr const static std::string_view MatchDestroy_type_name = "MatchDestroy";
		constexpr const static rivet::rivet_type_id MatchDestroy_type_id = 0x282599e5;
		constexpr const static std::string_view HideOnAutoDestroy_type_name = "HideOnAutoDestroy";
		constexpr const static rivet::rivet_type_id HideOnAutoDestroy_type_id = 0xe71cbd5a; 

		explicit AttachToActorEffectPrius() = default;
		explicit AttachToActorEffectPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x4891b54 ActorType {};
		bool ResetScriptedShotLifeTime {};
		float NewLifeTime {};
		bool DestroyOnBotDeath {};
		bool DestroyOnNonBotDeath {};
		bool MatchDestroy {};
		bool HideOnAutoDestroy {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AttachToActorEffectPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
