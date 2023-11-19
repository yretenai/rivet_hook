// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroSpecificInteractLocationPointPrius.hpp>
#include <rivet/ddl/generated/DDLVector3.hpp> 

#include <rivet/ddl/generated/InteractLocationPointPrius.hpp>

namespace rivet::ddl::generated {
	InteractLocationPointPrius::InteractLocationPointPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): InteractLocationPrius(serialized) {
		UseVolume = serialized->get_uint64(UseVolume_type_id);
		UseBoxOffset = serialized->unwrap_into<rivet::ddl::generated::DDLVector3>(UseBoxOffset_type_id);
		UserFaceMode = serialized->get_enum<rivet::ddl::generated::xccd3eeab>(UserFaceMode_type_id, rivet::ddl::generated::xccd3eeab_values); 
	}

	[[nodiscard]] auto
	InteractLocationPointPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	InteractLocationPointPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<InteractLocationPointPrius> {
		if (incoming_type_id == InteractLocationPointPrius::type_id) {
			return std::make_shared<InteractLocationPointPrius>(serialized);
		}

		auto HeroSpecificInteractLocationPointPrius_ptr = HeroSpecificInteractLocationPointPrius::from_substruct(incoming_type_id, serialized);
		if (HeroSpecificInteractLocationPointPrius_ptr != nullptr) {
			return HeroSpecificInteractLocationPointPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated