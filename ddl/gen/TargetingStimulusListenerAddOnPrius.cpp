// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetingStimulusListenerAddOnGenericPrius.hpp> 

#include <rivet/ddl/generated/TargetingStimulusListenerAddOnPrius.hpp>

namespace rivet::ddl::generated {
	TargetingStimulusListenerAddOnPrius::TargetingStimulusListenerAddOnPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BonusConfirmTime = serialized->get_float(BonusConfirmTime_type_id, 0.000000f);
		Aggro = serialized->get_float(Aggro_type_id, 15.000000f);
		ListenRadius = serialized->get_float(ListenRadius_type_id, 30.000000f); 
	}

	[[nodiscard]] auto
	TargetingStimulusListenerAddOnPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetingStimulusListenerAddOnPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetingStimulusListenerAddOnPrius> {
		if (incoming_type_id == TargetingStimulusListenerAddOnPrius::type_id) {
			return std::make_shared<TargetingStimulusListenerAddOnPrius>(serialized);
		}

		auto TargetingStimulusListenerAddOnGenericPrius_ptr = TargetingStimulusListenerAddOnGenericPrius::from_substruct(incoming_type_id, serialized);
		if (TargetingStimulusListenerAddOnGenericPrius_ptr != nullptr) {
			return TargetingStimulusListenerAddOnGenericPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
