// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MaterialConstantHealthControlledValueData.hpp>

namespace rivet::ddl::generated {
	MaterialConstantHealthControlledValueData::MaterialConstantHealthControlledValueData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HealthAmount = serialized->get_float(HealthAmount_type_id, 0.500000f);
		ConstantValue = serialized->get_float(ConstantValue_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	MaterialConstantHealthControlledValueData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MaterialConstantHealthControlledValueData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MaterialConstantHealthControlledValueData> {
		if (incoming_type_id == MaterialConstantHealthControlledValueData::type_id) {
			return std::make_shared<MaterialConstantHealthControlledValueData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
