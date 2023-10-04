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

#include <rivet/ddl/generated/enums/x7ecfc969.hpp>
#include <rivet/ddl/generated/enums/x5d60d87e.hpp> 

namespace rivet::ddl::generated {
	struct SkinItemModelVariantOverride; 

	struct RIVET_DDL_SHARED SkinItemModelVariantOverrideListElement : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "SkinItemModelVariantOverrideListElement";
		constexpr const static rivet::rivet_type_id type_id = 0xf686ae9;

		constexpr const static std::string_view DebugName_type_name = "DebugName";
		constexpr const static rivet::rivet_type_id DebugName_type_id = 0x4ef19112;
		constexpr const static std::string_view NameLocTag_type_name = "NameLocTag";
		constexpr const static rivet::rivet_type_id NameLocTag_type_id = 0xa0041b54;
		constexpr const static std::string_view Available_type_name = "Available";
		constexpr const static rivet::rivet_type_id Available_type_id = 0x27723b89;
		constexpr const static std::string_view BodyType_type_name = "BodyType";
		constexpr const static rivet::rivet_type_id BodyType_type_id = 0x1a1c112a;
		constexpr const static std::string_view ModelVariantOverride_type_name = "ModelVariantOverride";
		constexpr const static rivet::rivet_type_id ModelVariantOverride_type_id = 0x53cc5880; 

		explicit SkinItemModelVariantOverrideListElement() = default;
		explicit SkinItemModelVariantOverrideListElement([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view DebugName {};
		std::string_view NameLocTag {};
		rivet::ddl::generated::x7ecfc969 Available {};
		rivet::ddl::generated::x5d60d87e BodyType {};
		std::shared_ptr<rivet::ddl::generated::SkinItemModelVariantOverride> ModelVariantOverride {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemModelVariantOverrideListElement>;
	};
} // namespace rivet::ddl::generated

// clang-format on