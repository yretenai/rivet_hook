// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Tier.hpp> 

#include <rivet/ddl/generated/TierData.hpp>

namespace rivet::ddl::generated {
	TierData::TierData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Tiers = serialized->unwrap_into_many<rivet::ddl::generated::Tier>(Tiers_type_id); 
	}

	[[nodiscard]] auto
	TierData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TierData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TierData> {
		if (incoming_type_id == TierData::type_id) {
			return std::make_shared<TierData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
