// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/Cinematic2TransitionFadeDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2TransitionFadeDef::Cinematic2TransitionFadeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		ShotId = serialized->get_uint64(ShotId_type_id, 0ull);
		Duration = serialized->get_float(Duration_type_id, 0.500000f);
		StartType = serialized->get_enum<rivet::ddl::generated::x10205e3>(StartType_type_id, rivet::ddl::generated::x10205e3_values, rivet::ddl::generated::x10205e3::Beginning_Of_Shot);
		SmoothingType = serialized->get_enum<rivet::ddl::generated::x53914cb6>(SmoothingType_type_id, rivet::ddl::generated::x53914cb6_values, rivet::ddl::generated::x53914cb6::Linear);
		FadeToColor = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(FadeToColor_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2TransitionFadeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2TransitionFadeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2TransitionFadeDef> {
		if (incoming_type_id == Cinematic2TransitionFadeDef::type_id) {
			return std::make_shared<Cinematic2TransitionFadeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
