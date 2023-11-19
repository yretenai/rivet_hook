// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/RenderColorOverride.hpp>
#include <rivet/ddl/generated/RenderTextureOverride.hpp>
#include <rivet/ddl/generated/RenderConstantOverride.hpp> 

#include <rivet/ddl/generated/RenderOverrides.hpp>

namespace rivet::ddl::generated {
	RenderOverrides::RenderOverrides([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Constants = serialized->unwrap_into_many<rivet::ddl::generated::RenderConstantOverride>(Constants_type_id);
		Textures = serialized->unwrap_into_many<rivet::ddl::generated::RenderTextureOverride>(Textures_type_id);
		Colors = serialized->unwrap_into_many<rivet::ddl::generated::RenderColorOverride>(Colors_type_id); 
	}

	[[nodiscard]] auto
	RenderOverrides::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	RenderOverrides::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<RenderOverrides> {
		if (incoming_type_id == RenderOverrides::type_id) {
			return std::make_shared<RenderOverrides>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated