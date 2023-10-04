// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ColorBlindFilterData.hpp>

namespace rivet::ddl::generated {
	ColorBlindFilterData::ColorBlindFilterData([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		ProtanopiaFilterTexture = serialized->get_string(ProtanopiaFilterTexture_type_id);
		DeuteranopiaFilterTexture = serialized->get_string(DeuteranopiaFilterTexture_type_id);
		TritanopiaFilterTexture = serialized->get_string(TritanopiaFilterTexture_type_id); 
	}

	[[nodiscard]] auto
	ColorBlindFilterData::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ColorBlindFilterData::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ColorBlindFilterData> {
		if (incoming_type_id == ColorBlindFilterData::type_id) {
			return std::make_shared<ColorBlindFilterData>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated