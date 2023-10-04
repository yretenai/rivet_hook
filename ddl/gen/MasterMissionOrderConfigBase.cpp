// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MissionOrderListIndirect.hpp> 

#include <rivet/ddl/generated/MasterMissionOrderConfigBase.hpp>

namespace rivet::ddl::generated {
	MasterMissionOrderConfigBase::MasterMissionOrderConfigBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MissionOrderLists = serialized->unwrap_into_many<rivet::ddl::generated::MissionOrderListIndirect>(MissionOrderLists_type_id); 
	}

	[[nodiscard]] auto
	MasterMissionOrderConfigBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MasterMissionOrderConfigBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MasterMissionOrderConfigBase> {
		if (incoming_type_id == MasterMissionOrderConfigBase::type_id) {
			return std::make_shared<MasterMissionOrderConfigBase>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
