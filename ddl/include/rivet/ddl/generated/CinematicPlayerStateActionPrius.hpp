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

#include <rivet/ddl/generated/bitsets/xc1e2b7b6.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED CinematicPlayerStateActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CinematicPlayerStateActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x1e65687c;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view Flags_type_name = "Flags";
		constexpr static rivet::rivet_type_id Flags_type_id = 0x12568d7b;
		constexpr static std::string_view CurrencyCollectDist_type_name = "CurrencyCollectDist";
		constexpr static rivet::rivet_type_id CurrencyCollectDist_type_id = 0x75b524c3;
		constexpr static std::string_view DeactivateOnDestroy_type_name = "DeactivateOnDestroy";
		constexpr static rivet::rivet_type_id DeactivateOnDestroy_type_id = 0xbcc31172; 

		explicit CinematicPlayerStateActionPrius() = default;
		explicit CinematicPlayerStateActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		rivet::ddl::generated::xc1e2b7b6 Flags {};
		float CurrencyCollectDist {};
		bool DeactivateOnDestroy {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CinematicPlayerStateActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on