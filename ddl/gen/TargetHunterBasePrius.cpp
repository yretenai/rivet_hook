// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetHunterComponentTypePrius.hpp>
#include <rivet/ddl/generated/TargetHunterTargetTypePrius.hpp>
#include <rivet/ddl/generated/TargetHunterCustomCheck.hpp> 

#include <rivet/ddl/generated/TargetHunterBasePrius.hpp>

namespace rivet::ddl::generated {
	TargetHunterBasePrius::TargetHunterBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TargetHunterName = serialized->get_string(TargetHunterName_type_id, "");
		StartOnInit = serialized->get_bool(StartOnInit_type_id, true);
		MinRange = serialized->get_float(MinRange_type_id, 0.000000f);
		MaxRange = serialized->get_float(MaxRange_type_id, 1000.000000f);
		TestNav = serialized->get_bool(TestNav_type_id, true);
		TestGround = serialized->get_bool(TestGround_type_id, false);
		MustBeInHomeArea = serialized->get_bool(MustBeInHomeArea_type_id, true);
		TargetTimeout = serialized->get_float(TargetTimeout_type_id, -1.000000f);
		RecheckTime = serialized->get_float(RecheckTime_type_id, 2.000000f);
		Checks = serialized->unwrap_into_many<rivet::ddl::generated::TargetHunterCustomCheck>(Checks_type_id); 
	}

	[[nodiscard]] auto
	TargetHunterBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetHunterBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetHunterBasePrius> {
		if (incoming_type_id == TargetHunterBasePrius::type_id) {
			return std::make_shared<TargetHunterBasePrius>(serialized);
		}

		auto TargetHunterTargetTypePrius_ptr = TargetHunterTargetTypePrius::from_substruct(incoming_type_id, serialized);
		if (TargetHunterTargetTypePrius_ptr != nullptr) {
			return TargetHunterTargetTypePrius_ptr;
		}

		auto TargetHunterComponentTypePrius_ptr = TargetHunterComponentTypePrius::from_substruct(incoming_type_id, serialized);
		if (TargetHunterComponentTypePrius_ptr != nullptr) {
			return TargetHunterComponentTypePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
