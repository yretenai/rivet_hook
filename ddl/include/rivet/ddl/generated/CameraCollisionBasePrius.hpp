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
	struct RIVET_DDL_SHARED CameraCollisionBasePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "CameraCollisionBasePrius";
		constexpr static rivet::rivet_type_id type_id = 0x4b41be1;

		constexpr static std::string_view WallClearance_type_name = "WallClearance";
		constexpr static rivet::rivet_type_id WallClearance_type_id = 0x9edc4376;
		constexpr static std::string_view GainOut_type_name = "GainOut";
		constexpr static rivet::rivet_type_id GainOut_type_id = 0x200275b5;
		constexpr static std::string_view GainOutBlend_type_name = "GainOutBlend";
		constexpr static rivet::rivet_type_id GainOutBlend_type_id = 0xbeb88e37;
		constexpr static std::string_view GainInMin_type_name = "GainInMin";
		constexpr static rivet::rivet_type_id GainInMin_type_id = 0x840a98dc;
		constexpr static std::string_view GainInMax_type_name = "GainInMax";
		constexpr static rivet::rivet_type_id GainInMax_type_id = 0xb807a785;
		constexpr static std::string_view DistInMin_type_name = "DistInMin";
		constexpr static rivet::rivet_type_id DistInMin_type_id = 0xf815dd1;
		constexpr static std::string_view DistInMax_type_name = "DistInMax";
		constexpr static rivet::rivet_type_id DistInMax_type_id = 0x338c6288;
		constexpr static std::string_view DistInPower_type_name = "DistInPower";
		constexpr static rivet::rivet_type_id DistInPower_type_id = 0x8594cd74; 

		explicit CameraCollisionBasePrius() = default;
		explicit CameraCollisionBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		float WallClearance {};
		float GainOut {};
		float GainOutBlend {};
		float GainInMin {};
		float GainInMax {};
		float DistInMin {};
		float DistInMax {};
		float DistInPower {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CameraCollisionBasePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on