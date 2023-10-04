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

#include <rivet/ddl/generated/ConfigBase.hpp> 

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED UniqueHeroConfig : ConfigBase {
		constexpr const static std::string_view type_name = "UniqueHeroConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x15b4384d;

		constexpr const static std::string_view BodyScale_type_name = "BodyScale";
		constexpr const static rivet::rivet_type_id BodyScale_type_id = 0xa7db59f5;
		constexpr const static std::string_view AimSourceOffset_type_name = "AimSourceOffset";
		constexpr const static rivet::rivet_type_id AimSourceOffset_type_id = 0x6adb62fa;
		constexpr const static std::string_view ItemLoadoutConfig_type_name = "ItemLoadoutConfig";
		constexpr const static rivet::rivet_type_id ItemLoadoutConfig_type_id = 0xfa5c64a7;
		constexpr const static std::string_view HeroSkinConfig_type_name = "HeroSkinConfig";
		constexpr const static rivet::rivet_type_id HeroSkinConfig_type_id = 0xde3a2857;
		constexpr const static std::string_view HeroLevelConfig_type_name = "HeroLevelConfig";
		constexpr const static rivet::rivet_type_id HeroLevelConfig_type_id = 0xf437c18;
		constexpr const static std::string_view WeaponLevelConfig_type_name = "WeaponLevelConfig";
		constexpr const static rivet::rivet_type_id WeaponLevelConfig_type_id = 0xa0605605;
		constexpr const static std::string_view EmergentVOConfig_type_name = "EmergentVOConfig";
		constexpr const static rivet::rivet_type_id EmergentVOConfig_type_id = 0xde8b92bf;
		constexpr const static std::string_view VendorConfig_type_name = "VendorConfig";
		constexpr const static rivet::rivet_type_id VendorConfig_type_id = 0x8cd6fc16;
		constexpr const static std::string_view TraversalConfig_type_name = "TraversalConfig";
		constexpr const static rivet::rivet_type_id TraversalConfig_type_id = 0x63a9a110;
		constexpr const static std::string_view LavaDamage_type_name = "LavaDamage";
		constexpr const static rivet::rivet_type_id LavaDamage_type_id = 0x582768e9;
		constexpr const static std::string_view TurretDamageFactor_type_name = "TurretDamageFactor";
		constexpr const static rivet::rivet_type_id TurretDamageFactor_type_id = 0x846a56e5;
		constexpr const static std::string_view QuicksandDeathTime_type_name = "QuicksandDeathTime";
		constexpr const static rivet::rivet_type_id QuicksandDeathTime_type_id = 0x8a2b7191;
		constexpr const static std::string_view ClankBotTossDist_type_name = "ClankBotTossDist";
		constexpr const static rivet::rivet_type_id ClankBotTossDist_type_id = 0x9a2dfccf;
		constexpr const static std::string_view PowerBotTossDist_type_name = "PowerBotTossDist";
		constexpr const static rivet::rivet_type_id PowerBotTossDist_type_id = 0xacb703ce;
		constexpr const static std::string_view SpringBotTossDist_type_name = "SpringBotTossDist";
		constexpr const static rivet::rivet_type_id SpringBotTossDist_type_id = 0xd0d55337;
		constexpr const static std::string_view StretchBotTossDist_type_name = "StretchBotTossDist";
		constexpr const static rivet::rivet_type_id StretchBotTossDist_type_id = 0x2805d443;
		constexpr const static std::string_view BombBotTossDist_type_name = "BombBotTossDist";
		constexpr const static rivet::rivet_type_id BombBotTossDist_type_id = 0xf5a4bdef; 

		explicit UniqueHeroConfig() = default;
		explicit UniqueHeroConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float BodyScale {};
		std::shared_ptr<rivet::ddl::generated::DDLVector3> AimSourceOffset {};
		std::string_view ItemLoadoutConfig {};
		std::string_view HeroSkinConfig {};
		std::string_view HeroLevelConfig {};
		std::string_view WeaponLevelConfig {};
		std::string_view EmergentVOConfig {};
		std::string_view VendorConfig {};
		std::string_view TraversalConfig {};
		float LavaDamage {};
		float TurretDamageFactor {};
		float QuicksandDeathTime {};
		float ClankBotTossDist {};
		float PowerBotTossDist {};
		float SpringBotTossDist {};
		float StretchBotTossDist {};
		float BombBotTossDist {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UniqueHeroConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
