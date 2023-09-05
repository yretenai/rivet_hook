// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RecoilCameraShake.hpp> 

#include <rivet/ddl/generated/RecoilCameraShakeItem.hpp>

namespace rivet::ddl::generated {
	RecoilCameraShakeItem::RecoilCameraShakeItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		CameraShake = serialized->unwrap_into<rivet::ddl::generated::RecoilCameraShake>(CameraShake_type_id); 
	}

	auto
	RecoilCameraShakeItem::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	RecoilCameraShakeItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RecoilCameraShakeItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RecoilCameraShakeItem> {
		if (incoming_type_id == RecoilCameraShakeItem::type_id) {
			return std::make_shared<RecoilCameraShakeItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated