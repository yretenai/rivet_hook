// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ModelSplineColorRandomness.hpp>

namespace rivet::ddl::generated {
	ModelSplineColorRandomness::ModelSplineColorRandomness([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		X = serialized->get_float(X_type_id);
		Y = serialized->get_float(Y_type_id);
		Z = serialized->get_float(Z_type_id); 
	}

	[[nodiscard]] auto
	ModelSplineColorRandomness::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ModelSplineColorRandomness::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ModelSplineColorRandomness> {
		if (incoming_type_id == ModelSplineColorRandomness::type_id) {
			return std::make_shared<ModelSplineColorRandomness>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
