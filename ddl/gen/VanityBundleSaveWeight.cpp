// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/VanityBundleSaveWeight.hpp>

namespace rivet::ddl::generated {
	VanityBundleSaveWeight::VanityBundleSaveWeight([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SaveId = serialized->get_enum<rivet::ddl::generated::xd230f155>(SaveId_type_id, rivet::ddl::generated::xd230f155_values, rivet::ddl::generated::xd230f155::Galactic_Ranger_Head);
		Weight = serialized->get_float(Weight_type_id, 1.000000f); 
	}

	[[nodiscard]] auto
	VanityBundleSaveWeight::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	VanityBundleSaveWeight::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<VanityBundleSaveWeight> {
		if (incoming_type_id == VanityBundleSaveWeight::type_id) {
			return std::make_shared<VanityBundleSaveWeight>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
