// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2ZoneActionDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2ZoneActionDef::Cinematic2ZoneActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id);
		Time = serialized->get_float(Time_type_id);
		DurationType = serialized->get_enum<rivet::ddl::generated::x29c933e2>(DurationType_type_id, rivet::ddl::generated::x29c933e2_values);
		Duration = serialized->get_float(Duration_type_id);
		ZonePaths = serialized->get_strings(ZonePaths_type_id);
		ZoneOp = serialized->get_enum<rivet::ddl::generated::x39897f27>(ZoneOp_type_id, rivet::ddl::generated::x39897f27_values);
		VisibleTypes = serialized->get_bitset<rivet::ddl::generated::xcc20fb0>(VisibleTypes_type_id, rivet::ddl::generated::xcc20fb0_values); 
	}

	[[nodiscard]] auto
	Cinematic2ZoneActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2ZoneActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2ZoneActionDef> {
		if (incoming_type_id == Cinematic2ZoneActionDef::type_id) {
			return std::make_shared<Cinematic2ZoneActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated