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
	struct UDSHintLinks;
	struct UDSHintStatus; 

	struct RIVET_DDL_SHARED UDSHint : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "UDSHint";
		constexpr static rivet::rivet_type_id type_id = 0x7c1ccdda;

		constexpr static std::string_view objectId_type_name = "objectId";
		constexpr static rivet::rivet_type_id objectId_type_id = 0x9a05f2f9;
		constexpr static std::string_view name_type_name = "name";
		constexpr static rivet::rivet_type_id name_type_id = 0xce811188;
		constexpr static std::string_view Description_type_name = "Description";
		constexpr static rivet::rivet_type_id Description_type_id = 0xe03811fd;
		constexpr static std::string_view activeStatus_type_name = "activeStatus";
		constexpr static rivet::rivet_type_id activeStatus_type_id = 0xab16dd88;
		constexpr static std::string_view links_type_name = "links";
		constexpr static rivet::rivet_type_id links_type_id = 0x91042dd; 

		explicit UDSHint() = default;
		explicit UDSHint([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view objectId {};
		std::vector<std::string_view> name {};
		std::vector<std::string_view> Description {};
		std::shared_ptr<rivet::ddl::generated::UDSHintStatus> activeStatus {};
		std::shared_ptr<rivet::ddl::generated::UDSHintLinks> links {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UDSHint>;
	};
} // namespace rivet::ddl::generated

// clang-format on