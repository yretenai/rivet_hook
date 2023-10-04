// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClankPackLoadoutConfig.hpp>

namespace rivet::ddl::generated {
	ClankPackLoadoutConfig::ClankPackLoadoutConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		BackpackConfigForRatchet = serialized->get_string(BackpackConfigForRatchet_type_id);
		BackpackConfigForRivet = serialized->get_string(BackpackConfigForRivet_type_id); 
	}

	[[nodiscard]] auto
	ClankPackLoadoutConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ClankPackLoadoutConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ClankPackLoadoutConfig> {
		if (incoming_type_id == ClankPackLoadoutConfig::type_id) {
			return std::make_shared<ClankPackLoadoutConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
