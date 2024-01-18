// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SimpleDeathAnimPrius.hpp>

namespace rivet::ddl::generated {
	SimpleDeathAnimPrius::SimpleDeathAnimPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaxHealth = serialized->get_float(MaxHealth_type_id, 1.000000f); 
	}

	[[nodiscard]] auto
	SimpleDeathAnimPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SimpleDeathAnimPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SimpleDeathAnimPrius> {
		if (incoming_type_id == SimpleDeathAnimPrius::type_id) {
			return std::make_shared<SimpleDeathAnimPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
