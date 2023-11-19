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
	struct EventBase;
	struct MaterialConstantBlendBase; 

	struct RIVET_DDL_SHARED MaterialConstantEventControlledPrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "MaterialConstantEventControlledPrius";
		constexpr static rivet::rivet_type_id type_id = 0x44af4324;

		constexpr static std::string_view ConstantName_type_name = "ConstantName";
		constexpr static rivet::rivet_type_id ConstantName_type_id = 0xc6991700;
		constexpr static std::string_view MaterialMappingName_type_name = "MaterialMappingName";
		constexpr static rivet::rivet_type_id MaterialMappingName_type_id = 0x981e6927;
		constexpr static std::string_view InitialValue_type_name = "InitialValue";
		constexpr static rivet::rivet_type_id InitialValue_type_id = 0x8781be6;
		constexpr static std::string_view EventValue_type_name = "EventValue";
		constexpr static rivet::rivet_type_id EventValue_type_id = 0x456e15b9;
		constexpr static std::string_view SetInitialValueOnActivate_type_name = "SetInitialValueOnActivate";
		constexpr static rivet::rivet_type_id SetInitialValueOnActivate_type_id = 0x30bfe732;
		constexpr static std::string_view BlendStyle_type_name = "BlendStyle";
		constexpr static rivet::rivet_type_id BlendStyle_type_id = 0xb34024ea;
		constexpr static std::string_view IsSelfEvent_type_name = "IsSelfEvent";
		constexpr static rivet::rivet_type_id IsSelfEvent_type_id = 0xad9ebd15;
		constexpr static std::string_view Event_type_name = "Event";
		constexpr static rivet::rivet_type_id Event_type_id = 0x22fdc666; 

		explicit MaterialConstantEventControlledPrius() = default;
		explicit MaterialConstantEventControlledPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view ConstantName {};
		std::string_view MaterialMappingName {};
		float InitialValue {};
		float EventValue {};
		bool SetInitialValueOnActivate {};
		std::shared_ptr<rivet::ddl::generated::MaterialConstantBlendBase> BlendStyle {};
		bool IsSelfEvent {};
		std::shared_ptr<rivet::ddl::generated::EventBase> Event {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialConstantEventControlledPrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on