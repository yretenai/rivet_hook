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
	struct RIVET_DDL_SHARED ReqList : ConfigBase {
		constexpr const static std::string_view type_name = "ReqList";
		constexpr const static rivet::rivet_type_id type_id = 0xbe44a2e8;

		constexpr const static std::string_view Zones_type_name = "Zones";
		constexpr const static rivet::rivet_type_id Zones_type_id = 0x9c997da9;
		constexpr const static std::string_view Actors_type_name = "Actors";
		constexpr const static rivet::rivet_type_id Actors_type_id = 0xe153be82;
		constexpr const static std::string_view Conduits_type_name = "Conduits";
		constexpr const static rivet::rivet_type_id Conduits_type_id = 0x7b4d7a9f;
		constexpr const static std::string_view Configs_type_name = "Configs";
		constexpr const static rivet::rivet_type_id Configs_type_id = 0x43831b0b;
		constexpr const static std::string_view Soundbanks_type_name = "Soundbanks";
		constexpr const static rivet::rivet_type_id Soundbanks_type_id = 0x6760632a;
		constexpr const static std::string_view Misc_type_name = "Misc";
		constexpr const static rivet::rivet_type_id Misc_type_id = 0x4f37da0a; 

		explicit ReqList() = default;
		explicit ReqList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> Zones {};
		std::vector<std::string_view> Actors {};
		std::vector<std::string_view> Conduits {};
		std::vector<std::string_view> Configs {};
		std::vector<std::string_view> Soundbanks {};
		std::vector<std::string_view> Misc {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ReqList>;
	};
} // namespace rivet::ddl::generated

// clang-format on