// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/CorpseManagerSettings.hpp>

namespace rivet::ddl::generated {
	CorpseManagerSettings::CorpseManagerSettings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DesiredNumCorpses = serialized->get_int32(DesiredNumCorpses_type_id, 16u);
		MaxNumCorpses = serialized->get_int32(MaxNumCorpses_type_id, 32u); 
	}

	[[nodiscard]] auto
	CorpseManagerSettings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	CorpseManagerSettings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<CorpseManagerSettings> {
		if (incoming_type_id == CorpseManagerSettings::type_id) {
			return std::make_shared<CorpseManagerSettings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
