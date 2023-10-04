// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinData.hpp>

namespace rivet::ddl::generated {
	SkinData::SkinData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BodyLookGroup = serialized->get_string(BodyLookGroup_type_id);
		GloveLookGroup = serialized->get_string(GloveLookGroup_type_id);
		BootsLookGroup = serialized->get_string(BootsLookGroup_type_id);
		CapLookGroup = serialized->get_string(CapLookGroup_type_id);
		HelmetModel = serialized->get_string(HelmetModel_type_id);
		OxygenTankModel = serialized->get_string(OxygenTankModel_type_id); 
	}

	[[nodiscard]] auto
	SkinData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinData> {
		if (incoming_type_id == SkinData::type_id) {
			return std::make_shared<SkinData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
