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

#include <rivet/ddl/generated/UIGoldBoltOptionTypeBase.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED UIGoldBoltOptionTypeList : UIGoldBoltOptionTypeBase {
		constexpr const static std::string_view type_name = "UIGoldBoltOptionTypeList";
		constexpr const static rivet::rivet_type_id type_id = 0x462dfced;

		constexpr const static std::string_view Options_type_name = "Options";
		constexpr const static rivet::rivet_type_id Options_type_id = 0xd1df99bf; 

		explicit UIGoldBoltOptionTypeList() = default;
		explicit UIGoldBoltOptionTypeList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::vector<std::string_view> Options {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UIGoldBoltOptionTypeList>;
	};
} // namespace rivet::ddl::generated

// clang-format on
