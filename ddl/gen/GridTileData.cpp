// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GridTileData.hpp>

namespace rivet::ddl::generated {
	GridTileData::GridTileData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		GridIndex = serialized->get_uint32(GridIndex_type_id, 0u);
		TileIndex = serialized->get_uint32(TileIndex_type_id, 0u); 
	}

	[[nodiscard]] auto
	GridTileData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GridTileData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GridTileData> {
		if (incoming_type_id == GridTileData::type_id) {
			return std::make_shared<GridTileData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
