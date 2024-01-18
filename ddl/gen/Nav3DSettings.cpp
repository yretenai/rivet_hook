// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Nav3DSettings.hpp>

namespace rivet::ddl::generated {
	Nav3DSettings::Nav3DSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SVOGridMaxElements = serialized->get_uint32(SVOGridMaxElements_type_id, 13u);
		MaxQueries = serialized->get_uint32(MaxQueries_type_id, 32u);
		Enabled = serialized->get_bool(Enabled_type_id, false); 
	}

	[[nodiscard]] auto
	Nav3DSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Nav3DSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Nav3DSettings> {
		if (incoming_type_id == Nav3DSettings::type_id) {
			return std::make_shared<Nav3DSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
