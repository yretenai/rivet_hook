// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2SyncActionDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2SyncActionDef::Cinematic2SyncActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Time = serialized->get_float(Time_type_id, 0.000000f);
		DurationType = serialized->get_enum<rivet::ddl::generated::x29c933e2>(DurationType_type_id, rivet::ddl::generated::x29c933e2_values, rivet::ddl::generated::x29c933e2::None);
		Duration = serialized->get_float(Duration_type_id, 0.000000f);
		Description = serialized->get_string(Description_type_id, {});
		PlugIndex = serialized->get_enum<rivet::ddl::generated::x2bd8d9b9>(PlugIndex_type_id, rivet::ddl::generated::x2bd8d9b9_values, rivet::ddl::generated::x2bd8d9b9::Sync0); 
	}

	[[nodiscard]] auto
	Cinematic2SyncActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2SyncActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2SyncActionDef> {
		if (incoming_type_id == Cinematic2SyncActionDef::type_id) {
			return std::make_shared<Cinematic2SyncActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
