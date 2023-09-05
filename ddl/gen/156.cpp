// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NefariousFinaleMechHeartWeakspotData.hpp>

namespace rivet::ddl::generated {
	NefariousFinaleMechHeartWeakspotData::NefariousFinaleMechHeartWeakspotData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MaterialMappingName_Trim = serialized->get_string(MaterialMappingName_Trim_type_id);
		ConstantOverride_Trim = serialized->get_string(ConstantOverride_Trim_type_id);
		MaterialMappingName_Bulb = serialized->get_string(MaterialMappingName_Bulb_type_id);
		ConstantOverride_Bulb = serialized->get_string(ConstantOverride_Bulb_type_id);
		Partial_Anim = serialized->get_string(Partial_Anim_type_id); 
	}

	auto
	NefariousFinaleMechHeartWeakspotData::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	NefariousFinaleMechHeartWeakspotData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NefariousFinaleMechHeartWeakspotData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NefariousFinaleMechHeartWeakspotData> {
		if (incoming_type_id == NefariousFinaleMechHeartWeakspotData::type_id) {
			return std::make_shared<NefariousFinaleMechHeartWeakspotData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated