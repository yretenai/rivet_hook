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

#include <rivet/ddl/generated/enums/KnockbackLevels.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED ProtoGrenadeShardPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "ProtoGrenadeShardPrius";
		constexpr static rivet::rivet_type_id type_id = 0xd9de6886;

		constexpr static std::string_view KnockbackLevel_type_name = "KnockbackLevel";
		constexpr static rivet::rivet_type_id KnockbackLevel_type_id = 0x2554a262;
		constexpr static std::string_view KnockbackAmount_type_name = "KnockbackAmount";
		constexpr static rivet::rivet_type_id KnockbackAmount_type_id = 0x7b1e600b;
		constexpr static std::string_view DetonationTime_type_name = "DetonationTime";
		constexpr static rivet::rivet_type_id DetonationTime_type_id = 0x626e92d5;
		constexpr static std::string_view DisappearTimeMin_type_name = "DisappearTimeMin";
		constexpr static rivet::rivet_type_id DisappearTimeMin_type_id = 0x8a630cbc;
		constexpr static std::string_view DisappearTimeMax_type_name = "DisappearTimeMax";
		constexpr static rivet::rivet_type_id DisappearTimeMax_type_id = 0xb66e33e5; 

		explicit ProtoGrenadeShardPrius() = default;
		explicit ProtoGrenadeShardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::KnockbackLevels KnockbackLevel {};
		float KnockbackAmount {};
		float DetonationTime {};
		float DisappearTimeMin {};
		float DisappearTimeMax {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProtoGrenadeShardPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on