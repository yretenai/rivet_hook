// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VaultViewerSetAsset.hpp>

namespace rivet::ddl::generated {
	VaultViewerSetAsset::VaultViewerSetAsset([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AssetName = serialized->get_string(AssetName_type_id);
		AnimSetStack = serialized->get_strings(AnimSetStack_type_id);
		AnimSetActorAssetPath = serialized->get_string(AnimSetActorAssetPath_type_id);
		AnimSetModelAssetPath = serialized->get_string(AnimSetModelAssetPath_type_id); 
	}

	[[nodiscard]] auto
	VaultViewerSetAsset::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VaultViewerSetAsset::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VaultViewerSetAsset> {
		if (incoming_type_id == VaultViewerSetAsset::type_id) {
			return std::make_shared<VaultViewerSetAsset>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated