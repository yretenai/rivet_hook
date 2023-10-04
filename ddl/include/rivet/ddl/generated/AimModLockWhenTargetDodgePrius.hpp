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

#include <rivet/ddl/generated/AimModifierPrius.hpp> 

namespace rivet::ddl::generated {
	struct RIVET_DDL_SHARED AimModLockWhenTargetDodgePrius : AimModifierPrius {
		constexpr const static std::string_view type_name = "AimModLockWhenTargetDodgePrius";
		constexpr const static rivet::rivet_type_id type_id = 0x80d1d30c;

		constexpr const static std::string_view AllowLockDelay_type_name = "AllowLockDelay";
		constexpr const static rivet::rivet_type_id AllowLockDelay_type_id = 0xa0e0eb68;
		constexpr const static std::string_view PostDodgeTimeToLock_type_name = "PostDodgeTimeToLock";
		constexpr const static rivet::rivet_type_id PostDodgeTimeToLock_type_id = 0x69603d1f; 

		explicit AimModLockWhenTargetDodgePrius() = default;
		explicit AimModLockWhenTargetDodgePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float AllowLockDelay {};
		float PostDodgeTimeToLock {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModLockWhenTargetDodgePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on
