// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ProtoGrenadeShardPrius.hpp>

namespace rivet::ddl::generated {
	ProtoGrenadeShardPrius::ProtoGrenadeShardPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		KnockbackLevel = serialized->get_enum<rivet::ddl::generated::KnockbackLevels>(KnockbackLevel_type_id, rivet::ddl::generated::KnockbackLevels_values, rivet::ddl::generated::KnockbackLevels::Two);
		KnockbackAmount = serialized->get_float(KnockbackAmount_type_id, 4.000000f);
		DetonationTime = serialized->get_float(DetonationTime_type_id, 3.500000f);
		DisappearTimeMin = serialized->get_float(DisappearTimeMin_type_id, 3.000000f);
		DisappearTimeMax = serialized->get_float(DisappearTimeMax_type_id, 4.000000f); 
	}

	[[nodiscard]] auto
	ProtoGrenadeShardPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ProtoGrenadeShardPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ProtoGrenadeShardPrius> {
		if (incoming_type_id == ProtoGrenadeShardPrius::type_id) {
			return std::make_shared<ProtoGrenadeShardPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
