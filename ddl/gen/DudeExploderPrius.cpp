// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GenericChunks.hpp>
#include <rivet/ddl/generated/SpecificChunk.hpp> 

#include <rivet/ddl/generated/DudeExploderPrius.hpp>

namespace rivet::ddl::generated {
	DudeExploderPrius::DudeExploderPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ExplodeDelay = serialized->get_float(ExplodeDelay_type_id, 0.000000f);
		ExplodeDelayMin = serialized->get_float(ExplodeDelayMin_type_id, -1.000000f);
		HideDelay = serialized->get_float(HideDelay_type_id, 0.000000f);
		AlwaysExplodeOnDeath = serialized->get_bool(AlwaysExplodeOnDeath_type_id, false);
		MinSpeed = serialized->get_float(MinSpeed_type_id, 7.000000f);
		MaxSpeed = serialized->get_float(MaxSpeed_type_id, 10.000000f);
		MaxSpecificChunks = serialized->get_int32(MaxSpecificChunks_type_id, -1);
		MaxTotalChunks = serialized->get_int32(MaxTotalChunks_type_id, -1);
		ChunkLifetime = serialized->get_float(ChunkLifetime_type_id, -1.000000f);
		SpecificChunks = serialized->unwrap_into_many<rivet::ddl::generated::SpecificChunk>(SpecificChunks_type_id);
		GenericChunks = serialized->unwrap_into<rivet::ddl::generated::GenericChunks>(GenericChunks_type_id); 
	}

	[[nodiscard]] auto
	DudeExploderPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DudeExploderPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DudeExploderPrius> {
		if (incoming_type_id == DudeExploderPrius::type_id) {
			return std::make_shared<DudeExploderPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
