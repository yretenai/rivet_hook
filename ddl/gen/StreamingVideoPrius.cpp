// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StreamingVideoMaterialOverride.hpp> 

#include <rivet/ddl/generated/StreamingVideoPrius.hpp>

namespace rivet::ddl::generated {
	StreamingVideoPrius::StreamingVideoPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Config = serialized->get_string(Config_type_id, {});
		PreloadVideo = serialized->get_bool(PreloadVideo_type_id, false);
		PlayOnActivation = serialized->get_bool(PlayOnActivation_type_id, true);
		ActivationDelay = serialized->get_float(ActivationDelay_type_id, -1.000000f);
		MaterialOverride = serialized->unwrap_into<rivet::ddl::generated::StreamingVideoMaterialOverride>(MaterialOverride_type_id);
		ExtraMaterialOverrides = serialized->unwrap_into_many<rivet::ddl::generated::StreamingVideoMaterialOverride>(ExtraMaterialOverrides_type_id);
		TextureToReplace = serialized->get_string(TextureToReplace_type_id, {});
		MaterialTexture = serialized->get_string(MaterialTexture_type_id, "BaseMap2D_Texture"); 
	}

	[[nodiscard]] auto
	StreamingVideoPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StreamingVideoPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StreamingVideoPrius> {
		if (incoming_type_id == StreamingVideoPrius::type_id) {
			return std::make_shared<StreamingVideoPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
