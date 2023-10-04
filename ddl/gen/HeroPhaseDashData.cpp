// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AfterimageComponentPrius.hpp> 

#include <rivet/ddl/generated/HeroPhaseDashData.hpp>

namespace rivet::ddl::generated {
	HeroPhaseDashData::HeroPhaseDashData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AfterimageData = serialized->unwrap_into<rivet::ddl::generated::AfterimageComponentPrius>(AfterimageData_type_id); 
	}

	[[nodiscard]] auto
	HeroPhaseDashData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroPhaseDashData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroPhaseDashData> {
		if (incoming_type_id == HeroPhaseDashData::type_id) {
			return std::make_shared<HeroPhaseDashData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
