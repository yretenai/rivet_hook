// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/GalacticMapAccessCinematic.hpp>
#include <rivet/ddl/generated/InteractGeneralOfferPrius.hpp> 

#include <rivet/ddl/generated/GalacticMapAccessPrius.hpp>

namespace rivet::ddl::generated {
	GalacticMapAccessPrius::GalacticMapAccessPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		StartEnabled = serialized->get_bool(StartEnabled_type_id, true);
		DoManualLevelChange = serialized->get_bool(DoManualLevelChange_type_id, false);
		ShipType = serialized->get_enum<rivet::ddl::generated::x5c4496c6>(ShipType_type_id, rivet::ddl::generated::x5c4496c6_values, rivet::ddl::generated::x5c4496c6::Ship_None);
		InteractOfferPrius = serialized->unwrap_into<rivet::ddl::generated::InteractGeneralOfferPrius>(InteractOfferPrius_type_id);
		UseActorAsActorA = serialized->get_bool(UseActorAsActorA_type_id, false);
		LandCinematic = serialized->unwrap_into<rivet::ddl::generated::GalacticMapAccessCinematic>(LandCinematic_type_id);
		AccessMapCinematic = serialized->unwrap_into<rivet::ddl::generated::GalacticMapAccessCinematic>(AccessMapCinematic_type_id);
		ExitMapCinematic = serialized->unwrap_into<rivet::ddl::generated::GalacticMapAccessCinematic>(ExitMapCinematic_type_id);
		TakeOffCinematic = serialized->unwrap_into<rivet::ddl::generated::GalacticMapAccessCinematic>(TakeOffCinematic_type_id);
		CineOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(CineOffset_type_id);
		GetOutHeroOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(GetOutHeroOffset_type_id);
		DoorActor = serialized->get_uint64(DoorActor_type_id, 0ull);
		LandHeroWarpVol = serialized->get_uint64(LandHeroWarpVol_type_id, 0ull);
		LocationText = serialized->get_string(LocationText_type_id, "INVALID");
		LocTextDuration = serialized->get_float(LocTextDuration_type_id, 3.000000f);
		LocTextDelay = serialized->get_float(LocTextDelay_type_id, 0.000000f); 
	}

	[[nodiscard]] auto
	GalacticMapAccessPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GalacticMapAccessPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GalacticMapAccessPrius> {
		if (incoming_type_id == GalacticMapAccessPrius::type_id) {
			return std::make_shared<GalacticMapAccessPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
