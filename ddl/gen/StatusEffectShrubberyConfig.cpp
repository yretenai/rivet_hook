// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectShrubberyConfig.hpp>

namespace rivet::ddl::generated {
	StatusEffectShrubberyConfig::StatusEffectShrubberyConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectConfig(serialized) {

	}

	[[nodiscard]] auto
	StatusEffectShrubberyConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectShrubberyConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectShrubberyConfig> {
		if (incoming_type_id == StatusEffectShrubberyConfig::type_id) {
			return std::make_shared<StatusEffectShrubberyConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
