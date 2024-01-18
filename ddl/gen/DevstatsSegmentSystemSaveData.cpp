// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DevstatsSegmentSaveData.hpp> 

#include <rivet/ddl/generated/DevstatsSegmentSystemSaveData.hpp>

namespace rivet::ddl::generated {
	DevstatsSegmentSystemSaveData::DevstatsSegmentSystemSaveData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Segments = serialized->unwrap_into_many<rivet::ddl::generated::DevstatsSegmentSaveData>(Segments_type_id);
		PrimarySegment = serialized->get_uint32(PrimarySegment_type_id, 0u); 
	}

	[[nodiscard]] auto
	DevstatsSegmentSystemSaveData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DevstatsSegmentSystemSaveData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DevstatsSegmentSystemSaveData> {
		if (incoming_type_id == DevstatsSegmentSystemSaveData::type_id) {
			return std::make_shared<DevstatsSegmentSystemSaveData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
