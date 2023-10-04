// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/StreamingBinkFileConfig.hpp> 

#include <rivet/ddl/generated/StreamingBinkConfig.hpp>

namespace rivet::ddl::generated {
	StreamingBinkConfig::StreamingBinkConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): StreamingVideoBaseConfig(serialized) {

	}

	[[nodiscard]] auto
	StreamingBinkConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	StreamingBinkConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<StreamingBinkConfig> {
		if (incoming_type_id == StreamingBinkConfig::type_id) {
			return std::make_shared<StreamingBinkConfig>(serialized);
		}

		auto StreamingBinkFileConfig_ptr = StreamingBinkFileConfig::from_substruct(incoming_type_id, serialized);
		if (StreamingBinkFileConfig_ptr != nullptr) {
			return StreamingBinkFileConfig_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
