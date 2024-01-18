// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ArachnodroidEnemySpawnData.hpp>

namespace rivet::ddl::generated {
	ArachnodroidEnemySpawnData::ArachnodroidEnemySpawnData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): SimpleSpawnData(serialized) {
		PathIndex = serialized->get_uint8(PathIndex_type_id, 0u); 
	}

	[[nodiscard]] auto
	ArachnodroidEnemySpawnData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ArachnodroidEnemySpawnData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ArachnodroidEnemySpawnData> {
		if (incoming_type_id == ArachnodroidEnemySpawnData::type_id) {
			return std::make_shared<ArachnodroidEnemySpawnData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
