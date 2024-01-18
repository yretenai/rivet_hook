// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroMaterialGlobal.hpp>

namespace rivet::ddl::generated {
	HeroMaterialGlobal::HeroMaterialGlobal([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		LocatorName = serialized->get_string(LocatorName_type_id, {});
		ConstantName = serialized->get_string(ConstantName_type_id, {});
		Radius = serialized->get_float(Radius_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	HeroMaterialGlobal::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroMaterialGlobal::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroMaterialGlobal> {
		if (incoming_type_id == HeroMaterialGlobal::type_id) {
			return std::make_shared<HeroMaterialGlobal>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
