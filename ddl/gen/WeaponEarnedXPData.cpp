// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WeaponEarnedXPData.hpp>

namespace rivet::ddl::generated {
	WeaponEarnedXPData::WeaponEarnedXPData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		XPSource = serialized->get_enum<rivet::ddl::generated::xaaf755d6>(XPSource_type_id, rivet::ddl::generated::xaaf755d6_values);
		XPValue = serialized->get_float(XPValue_type_id); 
	}

	[[nodiscard]] auto
	WeaponEarnedXPData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WeaponEarnedXPData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WeaponEarnedXPData> {
		if (incoming_type_id == WeaponEarnedXPData::type_id) {
			return std::make_shared<WeaponEarnedXPData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
