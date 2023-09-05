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
	struct RecoilCameraShake; 

	struct RIVET_DDL_SHARED RecoilCameraShakeItem : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "RecoilCameraShakeItem";
		constexpr const static rivet::rivet_type_id type_id = 0x26714bf7;

		constexpr const static std::string_view CameraShake_type_name = "CameraShake";
		constexpr const static rivet::rivet_type_id CameraShake_type_id = 0xefd546ca; 

		explicit RecoilCameraShakeItem() = default;
		explicit RecoilCameraShakeItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::RecoilCameraShake> CameraShake {}; 

		auto
		get_type_id() const noexcept -> rivet::rivet_type_id override;

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RecoilCameraShakeItem>;
	};
} // namespace rivet::ddl::generated

// clang-format on