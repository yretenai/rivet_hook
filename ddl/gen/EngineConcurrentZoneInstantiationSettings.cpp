// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EngineConcurrentZoneInstantiationSettings.hpp>

namespace rivet::ddl::generated {
	EngineConcurrentZoneInstantiationSettings::EngineConcurrentZoneInstantiationSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		UseConcurrentInitialization = serialized->get_bool(UseConcurrentInitialization_type_id, false);
		TasksPerQueue = serialized->get_int16(TasksPerQueue_type_id, 6144u);
		StagingHeapPerThreadKB = serialized->get_int16(StagingHeapPerThreadKB_type_id, 8u);
		OutboxPerThreadKB = serialized->get_int16(OutboxPerThreadKB_type_id, 1024u); 
	}

	[[nodiscard]] auto
	EngineConcurrentZoneInstantiationSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EngineConcurrentZoneInstantiationSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EngineConcurrentZoneInstantiationSettings> {
		if (incoming_type_id == EngineConcurrentZoneInstantiationSettings::type_id) {
			return std::make_shared<EngineConcurrentZoneInstantiationSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
