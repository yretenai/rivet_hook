// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProxAggroRange.hpp> 

#include <rivet/ddl/generated/Tier.hpp>

namespace rivet::ddl::generated {
	Tier::Tier([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TargetTypes = serialized->get_bitset<rivet::ddl::generated::TargetType>(TargetTypes_type_id, rivet::ddl::generated::TargetType_values);
		MinRange = serialized->unwrap_into<rivet::ddl::generated::ProxAggroRange>(MinRange_type_id);
		AdditionalRanges = serialized->unwrap_into_many<rivet::ddl::generated::ProxAggroRange>(AdditionalRanges_type_id);
		MaxRange = serialized->unwrap_into<rivet::ddl::generated::ProxAggroRange>(MaxRange_type_id);
		ProximityAggroRate = serialized->get_float(ProximityAggroRate_type_id);
		ProximityAggroBleedRate = serialized->get_float(ProximityAggroBleedRate_type_id);
		RangedAreaBufferDistance = serialized->get_float(RangedAreaBufferDistance_type_id);
		RangedAreaDropoffDistance = serialized->get_float(RangedAreaDropoffDistance_type_id);
		IgnoreIfUnreachable = serialized->get_bool(IgnoreIfUnreachable_type_id); 
	}

	[[nodiscard]] auto
	Tier::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Tier::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Tier> {
		if (incoming_type_id == Tier::type_id) {
			return std::make_shared<Tier>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
