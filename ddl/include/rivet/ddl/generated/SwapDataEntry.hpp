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

#include <rivet/ddl/generated/enums/BoltReplacementType.hpp> 

namespace rivet::ddl::generated {
	struct DenomSettings; 

	struct RIVET_DDL_SHARED SwapDataEntry : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "SwapDataEntry";
		constexpr const static rivet::rivet_type_id type_id = 0x68808fc6;

		constexpr const static std::string_view BoltModelId_type_name = "BoltModelId";
		constexpr const static rivet::rivet_type_id BoltModelId_type_id = 0xcadf612a;
		constexpr const static std::string_view BaseModel_type_name = "BaseModel";
		constexpr const static rivet::rivet_type_id BaseModel_type_id = 0x5fef7c3a;
		constexpr const static std::string_view RndOptModel_type_name = "RndOptModel";
		constexpr const static rivet::rivet_type_id RndOptModel_type_id = 0xd2a40a13;
		constexpr const static std::string_view ForceYUpAndRot_type_name = "ForceYUpAndRot";
		constexpr const static rivet::rivet_type_id ForceYUpAndRot_type_id = 0x4bdef177;
		constexpr const static std::string_view BronzeSettings_type_name = "BronzeSettings";
		constexpr const static rivet::rivet_type_id BronzeSettings_type_id = 0xe212882f;
		constexpr const static std::string_view SilverSettings_type_name = "SilverSettings";
		constexpr const static rivet::rivet_type_id SilverSettings_type_id = 0x37ce4eef;
		constexpr const static std::string_view GoldSettings_type_name = "GoldSettings";
		constexpr const static rivet::rivet_type_id GoldSettings_type_id = 0x94f8303a;
		constexpr const static std::string_view PlatinumSettings_type_name = "PlatinumSettings";
		constexpr const static rivet::rivet_type_id PlatinumSettings_type_id = 0x6d8549b4; 

		explicit SwapDataEntry() = default;
		explicit SwapDataEntry([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::BoltReplacementType BoltModelId {};
		std::string_view BaseModel {};
		std::vector<std::string_view> RndOptModel {};
		bool ForceYUpAndRot {};
		std::shared_ptr<rivet::ddl::generated::DenomSettings> BronzeSettings {};
		std::shared_ptr<rivet::ddl::generated::DenomSettings> SilverSettings {};
		std::shared_ptr<rivet::ddl::generated::DenomSettings> GoldSettings {};
		std::shared_ptr<rivet::ddl::generated::DenomSettings> PlatinumSettings {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SwapDataEntry>;
	};
} // namespace rivet::ddl::generated

// clang-format on
