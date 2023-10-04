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
#include <rivet/ddl/generated/bitsets/xe5616699.hpp> 

namespace rivet::ddl::generated {
	struct DevstatsEventEntry; 

	struct RIVET_DDL_SHARED DevstatsSystemConfig : ConfigBase {
		constexpr const static std::string_view type_name = "DevstatsSystemConfig";
		constexpr const static rivet::rivet_type_id type_id = 0x86c0710a;

		constexpr const static std::string_view EnabledConfigurations_type_name = "EnabledConfigurations";
		constexpr const static rivet::rivet_type_id EnabledConfigurations_type_id = 0x2cc6ad5e;
		constexpr const static std::string_view EventTypes_type_name = "EventTypes";
		constexpr const static rivet::rivet_type_id EventTypes_type_id = 0x129c4bd; 

		explicit DevstatsSystemConfig() = default;
		explicit DevstatsSystemConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		rivet::ddl::generated::xe5616699 EnabledConfigurations {};
		std::vector<std::shared_ptr<rivet::ddl::generated::DevstatsEventEntry>> EventTypes {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsSystemConfig>;
	};
} // namespace rivet::ddl::generated

// clang-format on