// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DDLVector3.hpp>
#include <rivet/ddl/generated/VaultMetaData.hpp> 

#include <rivet/ddl/generated/EnvProbeDef.hpp>

namespace rivet::ddl::generated {
	EnvProbeDef::EnvProbeDef([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		VaultMetaData = serialized->unwrap_into<rivet::ddl::generated::VaultMetaData>(VaultMetaData_type_id);
		IconPath = serialized->get_string(IconPath_type_id);
		Type = serialized->get_enum<rivet::ddl::generated::x9c037e6>(Type_type_id, rivet::ddl::generated::x9c037e6_values);
		VolumeShape = serialized->get_enum<rivet::ddl::generated::VolumeShapes>(VolumeShape_type_id, rivet::ddl::generated::VolumeShapes_values);
		AutoUpdateProxyDists = serialized->get_bool(AutoUpdateProxyDists_type_id);
		DiffuseContribution = serialized->get_bool(DiffuseContribution_type_id);
		TextureAsset = serialized->get_string(TextureAsset_type_id);
		Weight = serialized->get_float(Weight_type_id);
		ProbeOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(ProbeOffset_type_id);
		FalloffDistNegX = serialized->get_float(FalloffDistNegX_type_id);
		FalloffDistPosX = serialized->get_float(FalloffDistPosX_type_id);
		FalloffDistNegY = serialized->get_float(FalloffDistNegY_type_id);
		FalloffDistPosY = serialized->get_float(FalloffDistPosY_type_id);
		FalloffDistNegZ = serialized->get_float(FalloffDistNegZ_type_id);
		FalloffDistPosZ = serialized->get_float(FalloffDistPosZ_type_id);
		ProxyDistNegX = serialized->get_float(ProxyDistNegX_type_id);
		ProxyDistPosX = serialized->get_float(ProxyDistPosX_type_id);
		ProxyDistNegY = serialized->get_float(ProxyDistNegY_type_id);
		ProxyDistPosY = serialized->get_float(ProxyDistPosY_type_id);
		ProxyDistNegZ = serialized->get_float(ProxyDistNegZ_type_id);
		ProxyDistPosZ = serialized->get_float(ProxyDistPosZ_type_id);
		ModelDrawListNegX = serialized->get_uint64s(ModelDrawListNegX_type_id);
		ModelDrawListPosX = serialized->get_uint64s(ModelDrawListPosX_type_id);
		ModelDrawListNegY = serialized->get_uint64s(ModelDrawListNegY_type_id);
		ModelDrawListPosY = serialized->get_uint64s(ModelDrawListPosY_type_id);
		ModelDrawListNegZ = serialized->get_uint64s(ModelDrawListNegZ_type_id);
		ModelDrawListPosZ = serialized->get_uint64s(ModelDrawListPosZ_type_id);
		ImpostorDrawListNegX = serialized->get_uint64s(ImpostorDrawListNegX_type_id);
		ImpostorDrawListPosX = serialized->get_uint64s(ImpostorDrawListPosX_type_id);
		ImpostorDrawListNegY = serialized->get_uint64s(ImpostorDrawListNegY_type_id);
		ImpostorDrawListPosY = serialized->get_uint64s(ImpostorDrawListPosY_type_id);
		ImpostorDrawListNegZ = serialized->get_uint64s(ImpostorDrawListNegZ_type_id);
		ImpostorDrawListPosZ = serialized->get_uint64s(ImpostorDrawListPosZ_type_id); 
	}

	[[nodiscard]] auto
	EnvProbeDef::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EnvProbeDef::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EnvProbeDef> {
		if (incoming_type_id == EnvProbeDef::type_id) {
			return std::make_shared<EnvProbeDef>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated