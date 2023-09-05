// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StreamingStaticImageConfig.hpp>

namespace rivet::ddl::generated {
	StreamingStaticImageConfig::StreamingStaticImageConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StreamingVideoBaseConfig(serialized) {
		TextureAsset = serialized->get_string(TextureAsset_type_id);
		Duration = serialized->get_float(Duration_type_id); 
	}

	auto
	StreamingStaticImageConfig::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	StreamingStaticImageConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StreamingStaticImageConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StreamingStaticImageConfig> {
		if (incoming_type_id == StreamingStaticImageConfig::type_id) {
			return std::make_shared<StreamingStaticImageConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated