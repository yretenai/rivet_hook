// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LunaFtpGameBuildConfigFile.hpp>

namespace rivet::ddl::generated {
	LunaFtpGameBuildConfigFile::LunaFtpGameBuildConfigFile([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		BuildName = serialized->get_string(BuildName_type_id);
		ProjectId = serialized->get_string(ProjectId_type_id);
		Branch = serialized->get_string(Branch_type_id);
		VersionMajor = serialized->get_int32(VersionMajor_type_id);
		VersionMinor = serialized->get_int32(VersionMinor_type_id);
		VersionPatch = serialized->get_int32(VersionPatch_type_id);
		NameTag = serialized->get_string(NameTag_type_id);
		CreatedBy = serialized->get_string(CreatedBy_type_id);
		CreationDate = serialized->get_string(CreationDate_type_id);
		BuildType = serialized->get_string(BuildType_type_id);
		SyncedToCL = serialized->get_string(SyncedToCL_type_id);
		IsFastBuild = serialized->get_bool(IsFastBuild_type_id);
		HasDebugInfo = serialized->get_bool(HasDebugInfo_type_id);
		IsInSymStore = serialized->get_bool(IsInSymStore_type_id);
		Platforms = serialized->get_bitset<rivet::ddl::generated::x5753f3c8>(Platforms_type_id, rivet::ddl::generated::x5753f3c8_values);
		PlatformBuildDates = serialized->get_strings(PlatformBuildDates_type_id);
		FailedPlatforms = serialized->get_bitset<rivet::ddl::generated::x5753f3c8>(FailedPlatforms_type_id, rivet::ddl::generated::x5753f3c8_values);
		CompatibleUpdaterVersion = serialized->get_string(CompatibleUpdaterVersion_type_id);
		CompatibleHavokVersion = serialized->get_string(CompatibleHavokVersion_type_id);
		CompatibleWinExtVersion = serialized->get_string(CompatibleWinExtVersion_type_id);
		CompatibleMaya2018Version = serialized->get_string(CompatibleMaya2018Version_type_id);
		CompatibleMaya2020Version = serialized->get_string(CompatibleMaya2020Version_type_id); 
	}

	[[nodiscard]] auto
	LunaFtpGameBuildConfigFile::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LunaFtpGameBuildConfigFile::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LunaFtpGameBuildConfigFile> {
		if (incoming_type_id == LunaFtpGameBuildConfigFile::type_id) {
			return std::make_shared<LunaFtpGameBuildConfigFile>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated