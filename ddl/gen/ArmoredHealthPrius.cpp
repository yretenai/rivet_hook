// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ArmoredHealthPrius.hpp>

namespace rivet::ddl::generated {
	ArmoredHealthPrius::ArmoredHealthPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): HealthPrius(serialized) {

	}

	[[nodiscard]] auto
	ArmoredHealthPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ArmoredHealthPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ArmoredHealthPrius> {
		if (incoming_type_id == ArmoredHealthPrius::type_id) {
			return std::make_shared<ArmoredHealthPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated