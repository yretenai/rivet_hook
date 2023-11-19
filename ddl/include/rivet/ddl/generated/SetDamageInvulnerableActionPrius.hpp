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

#include <rivet/ddl/generated/enums/x6bdf4ba1.hpp>
#include <rivet/ddl/generated/enums/DamageTypes.hpp>
#include <rivet/ddl/generated/enums/x10228b34.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED SetDamageInvulnerableActionPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "SetDamageInvulnerableActionPrius";
		constexpr static rivet::rivet_type_id type_id = 0x7d3296d4;

		constexpr static std::string_view ActionType_type_name = "ActionType";
		constexpr static rivet::rivet_type_id ActionType_type_id = 0x874b2194;
		constexpr static std::string_view FilterTypes_type_name = "FilterTypes";
		constexpr static rivet::rivet_type_id FilterTypes_type_id = 0x2032e08d;
		constexpr static std::string_view AllegianceTypes_type_name = "AllegianceTypes";
		constexpr static rivet::rivet_type_id AllegianceTypes_type_id = 0xcbbd390f;
		constexpr static std::string_view FilterIsExclude_type_name = "FilterIsExclude";
		constexpr static rivet::rivet_type_id FilterIsExclude_type_id = 0x96f0a657;
		constexpr static std::string_view AllowReacts_type_name = "AllowReacts";
		constexpr static rivet::rivet_type_id AllowReacts_type_id = 0x7d494b99; 

		explicit SetDamageInvulnerableActionPrius() = default;
		explicit SetDamageInvulnerableActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::x10228b34 ActionType {};
		std::vector<rivet::ddl::generated::DamageTypes> FilterTypes {};
		std::vector<rivet::ddl::generated::x6bdf4ba1> AllegianceTypes {};
		bool FilterIsExclude {};
		bool AllowReacts {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SetDamageInvulnerableActionPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on