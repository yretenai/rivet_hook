// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VaultBuildStatusOutput.hpp>

namespace rivet::ddl::generated {
	VaultBuildStatusOutput::VaultBuildStatusOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		IsBuildingToC = serialized->get_bool(IsBuildingToC_type_id);
		IsUpdatingEntries = serialized->get_bool(IsUpdatingEntries_type_id);
		CurrentEntryCount = serialized->get_int32(CurrentEntryCount_type_id);
		TotalEntryCount = serialized->get_int32(TotalEntryCount_type_id);
		OutdatedEntryCount = serialized->get_int32(OutdatedEntryCount_type_id); 
	}

	[[nodiscard]] auto
	VaultBuildStatusOutput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VaultBuildStatusOutput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultBuildStatusOutput> {
		if (incoming_type_id == VaultBuildStatusOutput::type_id) {
			return std::make_shared<VaultBuildStatusOutput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated