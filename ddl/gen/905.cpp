// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ContractingVolley.hpp>

namespace rivet::ddl::generated {
	ContractingVolley::ContractingVolley([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		InaccuracyMin = serialized->get_float(InaccuracyMin_type_id);
		InaccuracyMax = serialized->get_float(InaccuracyMax_type_id);
		ShotsToMinAccuracy = serialized->get_float(ShotsToMinAccuracy_type_id); 
	}

	auto
	ContractingVolley::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ContractingVolley::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ContractingVolley::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ContractingVolley> {
		if (incoming_type_id == ContractingVolley::type_id) {
			return std::make_shared<ContractingVolley>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated