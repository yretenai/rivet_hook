// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/MayaExportAnimClipData.hpp>

namespace rivet::ddl::generated {
	MayaExportAnimClipData::MayaExportAnimClipData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		MayaPaths = serialized->get_strings(MayaPaths_type_id);
		ScriptCmd = serialized->get_string(ScriptCmd_type_id); 
	}

	[[nodiscard]] auto
	MayaExportAnimClipData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MayaExportAnimClipData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MayaExportAnimClipData> {
		if (incoming_type_id == MayaExportAnimClipData::type_id) {
			return std::make_shared<MayaExportAnimClipData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated