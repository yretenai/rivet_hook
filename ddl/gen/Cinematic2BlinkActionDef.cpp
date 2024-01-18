// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2BlinkActionDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2BlinkActionDef::Cinematic2BlinkActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Time = serialized->get_float(Time_type_id, 0.000000f);
		DurationType = serialized->get_enum<rivet::ddl::generated::x29c933e2>(DurationType_type_id, rivet::ddl::generated::x29c933e2_values, rivet::ddl::generated::x29c933e2::None);
		Duration = serialized->get_float(Duration_type_id, 0.000000f);
		BlendInDuration = serialized->get_float(BlendInDuration_type_id, 0.000000f);
		BlendOutDuration = serialized->get_float(BlendOutDuration_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	Cinematic2BlinkActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2BlinkActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2BlinkActionDef> {
		if (incoming_type_id == Cinematic2BlinkActionDef::type_id) {
			return std::make_shared<Cinematic2BlinkActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
