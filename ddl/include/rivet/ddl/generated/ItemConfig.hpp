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
	struct RIVET_DDL_SHARED ItemConfig : ConfigBase {
		constexpr const static std::string_view type_name = "ItemConfig";
		constexpr const static rivet::rivet_type_id type_id = 0xa88f833f;

		constexpr const static std::string_view Stackable_type_name = "Stackable";
		constexpr const static rivet::rivet_type_id Stackable_type_id = 0xf4daa975;
		constexpr const static std::string_view MaxCount_type_name = "MaxCount";
		constexpr const static rivet::rivet_type_id MaxCount_type_id = 0x9c4783f5;
		constexpr const static std::string_view ItemActor_type_name = "ItemActor";
		constexpr const static rivet::rivet_type_id ItemActor_type_id = 0x925cd211; 

		explicit ItemConfig() = default;
		explicit ItemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		bool Stackable {};
		uint32_t MaxCount {};
		std::string_view ItemActor {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ItemConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on
