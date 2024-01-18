// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2AudioGameSyncGroupActionDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2AudioGameSyncGroupActionDef::Cinematic2AudioGameSyncGroupActionDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Id = serialized->get_uint64(Id_type_id, 0ull);
		Time = serialized->get_float(Time_type_id, 0.000000f);
		DurationType = serialized->get_enum<rivet::ddl::generated::x29c933e2>(DurationType_type_id, rivet::ddl::generated::x29c933e2_values, rivet::ddl::generated::x29c933e2::None);
		Duration = serialized->get_float(Duration_type_id, 0.000000f);
		GroupName = serialized->get_string(GroupName_type_id, {});
		Name = serialized->get_string(Name_type_id, {}); 
	}

	[[nodiscard]] auto
	Cinematic2AudioGameSyncGroupActionDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2AudioGameSyncGroupActionDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2AudioGameSyncGroupActionDef> {
		if (incoming_type_id == Cinematic2AudioGameSyncGroupActionDef::type_id) {
			return std::make_shared<Cinematic2AudioGameSyncGroupActionDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
