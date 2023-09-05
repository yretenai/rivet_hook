// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SkinItemPart.hpp>

namespace rivet::ddl::generated {
	SkinItemPart::SkinItemPart([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Slot = serialized->get_enum<rivet::ddl::generated::x1b3f99b5>(Slot_type_id, rivet::ddl::generated::x1b3f99b5_values);
		Layer = serialized->get_enum<rivet::ddl::generated::x5eb34cd6>(Layer_type_id, rivet::ddl::generated::x5eb34cd6_values);
		Hidden = serialized->get_enum<rivet::ddl::generated::xc837e0c6>(Hidden_type_id, rivet::ddl::generated::xc837e0c6_values);
		ExcludeInner = serialized->get_bool(ExcludeInner_type_id); 
	}

	auto
	SkinItemPart::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	SkinItemPart::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SkinItemPart::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SkinItemPart> {
		if (incoming_type_id == SkinItemPart::type_id) {
			return std::make_shared<SkinItemPart>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated