// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/Cinematic2Settings.hpp>

namespace rivet::ddl::generated {
	Cinematic2Settings::Cinematic2Settings([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		TimecodeMode = serialized->get_enum<rivet::ddl::generated::xc74f3c1>(TimecodeMode_type_id, rivet::ddl::generated::xc74f3c1_values, rivet::ddl::generated::xc74f3c1::Disabled);
		VfxUISpawnDelay = serialized->get_float(VfxUISpawnDelay_type_id, 0.550000f);
		MovieUIUpdateDelay = serialized->get_float(MovieUIUpdateDelay_type_id, 0.100000f); 
	}

	[[nodiscard]] auto
	Cinematic2Settings::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	Cinematic2Settings::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<Cinematic2Settings> {
		if (incoming_type_id == Cinematic2Settings::type_id) {
			return std::make_shared<Cinematic2Settings>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
