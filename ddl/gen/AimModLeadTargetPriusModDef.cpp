// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ConfigModListElement.hpp> 

#include <rivet/ddl/generated/AimModLeadTargetPriusModDef.hpp>

namespace rivet::ddl::generated {
	AimModLeadTargetPriusModDef::AimModLeadTargetPriusModDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Variable = serialized->get_enum<rivet::ddl::generated::x68870183>(Variable_type_id, rivet::ddl::generated::x68870183_values);
		ModList = serialized->unwrap_into_many<rivet::ddl::generated::ConfigModListElement>(ModList_type_id); 
	}

	[[nodiscard]] auto
	AimModLeadTargetPriusModDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AimModLeadTargetPriusModDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AimModLeadTargetPriusModDef> {
		if (incoming_type_id == AimModLeadTargetPriusModDef::type_id) {
			return std::make_shared<AimModLeadTargetPriusModDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
