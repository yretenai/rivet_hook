// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RobotestPhysBreakableChunkInfo.hpp>
#include <rivet/ddl/generated/RobotestBasicActorInfo.hpp> 

#include <rivet/ddl/generated/RobotestPhysBreakablePop.hpp>

namespace rivet::ddl::generated {
	RobotestPhysBreakablePop::RobotestPhysBreakablePop([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TestName = serialized->get_string(TestName_type_id);
		Actor = serialized->unwrap_into<rivet::ddl::generated::RobotestBasicActorInfo>(Actor_type_id);
		ChunkPoolInUse = serialized->get_uint16(ChunkPoolInUse_type_id);
		ChunkPoolMax = serialized->get_uint16(ChunkPoolMax_type_id);
		MinRadius = serialized->get_float(MinRadius_type_id);
		AddToIndex = serialized->get_float(AddToIndex_type_id);
		ChunkSpawnCountIdeal = serialized->get_uint16(ChunkSpawnCountIdeal_type_id);
		DebrisPerChunk = serialized->get_int16(DebrisPerChunk_type_id);
		Chunks = serialized->unwrap_into_many<rivet::ddl::generated::RobotestPhysBreakableChunkInfo>(Chunks_type_id); 
	}

	[[nodiscard]] auto
	RobotestPhysBreakablePop::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RobotestPhysBreakablePop::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RobotestPhysBreakablePop> {
		if (incoming_type_id == RobotestPhysBreakablePop::type_id) {
			return std::make_shared<RobotestPhysBreakablePop>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated