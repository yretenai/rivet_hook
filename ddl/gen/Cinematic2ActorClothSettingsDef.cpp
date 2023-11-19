// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2ActorClothSettingsDef.hpp>

namespace rivet::ddl::generated {
	Cinematic2ActorClothSettingsDef::Cinematic2ActorClothSettingsDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enable = serialized->get_bool(Enable_type_id);
		OnMovingPlatform = serialized->get_bool(OnMovingPlatform_type_id);
		Settle = serialized->get_bool(Settle_type_id);
		Teleport = serialized->get_bool(Teleport_type_id); 
	}

	[[nodiscard]] auto
	Cinematic2ActorClothSettingsDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2ActorClothSettingsDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2ActorClothSettingsDef> {
		if (incoming_type_id == Cinematic2ActorClothSettingsDef::type_id) {
			return std::make_shared<Cinematic2ActorClothSettingsDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated