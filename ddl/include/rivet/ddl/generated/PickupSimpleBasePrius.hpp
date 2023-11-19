// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct DDLVector3; 

	struct RIVET_DDL_SHARED PickupSimpleBasePrius : rivet::structures::rivet_ddl_base {
		constexpr static std::string_view type_name = "PickupSimpleBasePrius";
		constexpr static rivet::rivet_type_id type_id = 0x4beb1ef6;

		constexpr static std::string_view Velocity_type_name = "Velocity";
		constexpr static rivet::rivet_type_id Velocity_type_id = 0x44d96bd9;
		constexpr static std::string_view DecayTimer_type_name = "DecayTimer";
		constexpr static rivet::rivet_type_id DecayTimer_type_id = 0xc4ffecad;
		constexpr static std::string_view NoPickupTime_type_name = "NoPickupTime";
		constexpr static rivet::rivet_type_id NoPickupTime_type_id = 0x68cab92d;
		constexpr static std::string_view PickupRange_type_name = "PickupRange";
		constexpr static rivet::rivet_type_id PickupRange_type_id = 0xfcf2ecef;
		constexpr static std::string_view AutoCollectTime_type_name = "AutoCollectTime";
		constexpr static rivet::rivet_type_id AutoCollectTime_type_id = 0x86b122ab;
		constexpr static std::string_view IdealCollectTime_type_name = "IdealCollectTime";
		constexpr static rivet::rivet_type_id IdealCollectTime_type_id = 0x908387d3;
		constexpr static std::string_view StartFixed_type_name = "StartFixed";
		constexpr static rivet::rivet_type_id StartFixed_type_id = 0xe6a2a2d6;
		constexpr static std::string_view DoBob_type_name = "DoBob";
		constexpr static rivet::rivet_type_id DoBob_type_id = 0xe24123b6;
		constexpr static std::string_view DoSpin_type_name = "DoSpin";
		constexpr static rivet::rivet_type_id DoSpin_type_id = 0x94c116b9;
		constexpr static std::string_view AutoCollectOnFallOut_type_name = "AutoCollectOnFallOut";
		constexpr static rivet::rivet_type_id AutoCollectOnFallOut_type_id = 0x8526b881;
		constexpr static std::string_view AutoCollectOnSpawn_type_name = "AutoCollectOnSpawn";
		constexpr static rivet::rivet_type_id AutoCollectOnSpawn_type_id = 0x4c922c82;
		constexpr static std::string_view DoSwarm_type_name = "DoSwarm";
		constexpr static rivet::rivet_type_id DoSwarm_type_id = 0xf499e387; 

		explicit PickupSimpleBasePrius() = default;
		explicit PickupSimpleBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::shared_ptr<rivet::ddl::generated::DDLVector3> Velocity {};
		float DecayTimer {};
		float NoPickupTime {};
		float PickupRange {};
		float AutoCollectTime {};
		float IdealCollectTime {};
		bool StartFixed {};
		bool DoBob {};
		bool DoSpin {};
		bool AutoCollectOnFallOut {};
		bool AutoCollectOnSpawn {};
		bool DoSwarm {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PickupSimpleBasePrius>;
	};
} // namespace rivet::ddl::generated

// clang-format on