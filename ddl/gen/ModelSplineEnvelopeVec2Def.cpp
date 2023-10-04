// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EnvelopeVec2Def.hpp>
#include <rivet/ddl/generated/DDLVector2.hpp> 

#include <rivet/ddl/generated/ModelSplineEnvelopeVec2Def.hpp>

namespace rivet::ddl::generated {
	ModelSplineEnvelopeVec2Def::ModelSplineEnvelopeVec2Def([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BaseValue = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(BaseValue_type_id);
		Envelope = serialized->unwrap_into<rivet::ddl::generated::EnvelopeVec2Def>(Envelope_type_id); 
	}

	[[nodiscard]] auto
	ModelSplineEnvelopeVec2Def::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ModelSplineEnvelopeVec2Def::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModelSplineEnvelopeVec2Def> {
		if (incoming_type_id == ModelSplineEnvelopeVec2Def::type_id) {
			return std::make_shared<ModelSplineEnvelopeVec2Def>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
