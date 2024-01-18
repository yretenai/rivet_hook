// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector2.hpp> 

#include <rivet/ddl/generated/EnvelopePointVec2.hpp>

namespace rivet::ddl::generated {
	EnvelopePointVec2::EnvelopePointVec2([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CanModifyX = serialized->get_bool(CanModifyX_type_id, true);
		CanModifyY = serialized->get_bool(CanModifyY_type_id, true);
		HoudiniInterpolationType = serialized->get_int32(HoudiniInterpolationType_type_id, 0u);
		X = serialized->get_float(X_type_id, 0.000000f);
		Y = serialized->unwrap_into<rivet::ddl::generated::DDLVector2>(Y_type_id); 
	}

	[[nodiscard]] auto
	EnvelopePointVec2::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EnvelopePointVec2::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnvelopePointVec2> {
		if (incoming_type_id == EnvelopePointVec2::type_id) {
			return std::make_shared<EnvelopePointVec2>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
