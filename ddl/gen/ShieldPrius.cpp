// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShieldPrius.hpp>

namespace rivet::ddl::generated {
	ShieldPrius::ShieldPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DamagePassthroughPercent = serialized->get_float(DamagePassthroughPercent_type_id, 0.000000f);
		MaxAngle = serialized->get_float(MaxAngle_type_id, 90.000000f); 
	}

	[[nodiscard]] auto
	ShieldPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShieldPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShieldPrius> {
		if (incoming_type_id == ShieldPrius::type_id) {
			return std::make_shared<ShieldPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
