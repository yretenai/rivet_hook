// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CoherentSettings.hpp>

namespace rivet::ddl::generated {
	CoherentSettings::CoherentSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Enabled = serialized->get_bool(Enabled_type_id, false);
		RenderEnable = serialized->get_bool(RenderEnable_type_id, true);
		ShowMemoryGraph = serialized->get_bool(ShowMemoryGraph_type_id, false);
		ShowMemoryMetrics = serialized->get_bool(ShowMemoryMetrics_type_id, false);
		ShowFrameGraph = serialized->get_bool(ShowFrameGraph_type_id, false);
		ShowGraphicsMemoryGraph = serialized->get_bool(ShowGraphicsMemoryGraph_type_id, false);
		ShowBackendTextures = serialized->get_bool(ShowBackendTextures_type_id, false);
		Memory = serialized->get_uint32(Memory_type_id, 20971520u);
		UseSmallBlock = serialized->get_bool(UseSmallBlock_type_id, false);
		GraphicsMemoryLarge = serialized->get_uint32(GraphicsMemoryLarge_type_id, 255852544u);
		GraphicsMemorySmall = serialized->get_uint32(GraphicsMemorySmall_type_id, 90177536u);
		GraphicsMemoryMetrics = serialized->get_bool(GraphicsMemoryMetrics_type_id, true);
		LoggingEnabled = serialized->get_bool(LoggingEnabled_type_id, false);
		DebuggingEnabled = serialized->get_bool(DebuggingEnabled_type_id, false);
		SoundLoggingEnabled = serialized->get_bool(SoundLoggingEnabled_type_id, false);
		DefaultStyleFontFamily = serialized->get_string(DefaultStyleFontFamily_type_id, {});
		ReadBuiltFiles = serialized->get_bool(ReadBuiltFiles_type_id, true);
		ShowUsabilityInputs = serialized->get_bool(ShowUsabilityInputs_type_id, false); 
	}

	[[nodiscard]] auto
	CoherentSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CoherentSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CoherentSettings> {
		if (incoming_type_id == CoherentSettings::type_id) {
			return std::make_shared<CoherentSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
