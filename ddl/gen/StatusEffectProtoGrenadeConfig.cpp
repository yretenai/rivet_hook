// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StatusEffectProtoGrenadeConfig.hpp>

namespace rivet::ddl::generated {
	StatusEffectProtoGrenadeConfig::StatusEffectProtoGrenadeConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StatusEffectConfig(serialized) {

	}

	[[nodiscard]] auto
	StatusEffectProtoGrenadeConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StatusEffectProtoGrenadeConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StatusEffectProtoGrenadeConfig> {
		if (incoming_type_id == StatusEffectProtoGrenadeConfig::type_id) {
			return std::make_shared<StatusEffectProtoGrenadeConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated