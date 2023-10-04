// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShotTopiarySprinklerPrius.hpp>

namespace rivet::ddl::generated {
	ShotTopiarySprinklerPrius::ShotTopiarySprinklerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): BasicBulletPrius(serialized) {
		NoSoundOnReturn = serialized->get_bool(NoSoundOnReturn_type_id); 
	}

	[[nodiscard]] auto
	ShotTopiarySprinklerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShotTopiarySprinklerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShotTopiarySprinklerPrius> {
		if (incoming_type_id == ShotTopiarySprinklerPrius::type_id) {
			return std::make_shared<ShotTopiarySprinklerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
