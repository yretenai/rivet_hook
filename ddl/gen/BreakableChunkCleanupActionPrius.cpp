// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BreakableChunkCleanupActionPrius.hpp>

namespace rivet::ddl::generated {
	BreakableChunkCleanupActionPrius::BreakableChunkCleanupActionPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ActionType = serialized->get_enum<rivet::ddl::generated::x10228b34>(ActionType_type_id, rivet::ddl::generated::x10228b34_values);
		CleanupChunkTypes = serialized->get_bitset<rivet::ddl::generated::x531f6c08>(CleanupChunkTypes_type_id, rivet::ddl::generated::x531f6c08_values);
		FadeOutChunks = serialized->get_bool(FadeOutChunks_type_id); 
	}

	[[nodiscard]] auto
	BreakableChunkCleanupActionPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BreakableChunkCleanupActionPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BreakableChunkCleanupActionPrius> {
		if (incoming_type_id == BreakableChunkCleanupActionPrius::type_id) {
			return std::make_shared<BreakableChunkCleanupActionPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated