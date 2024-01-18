// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/NefariousFinalePortalPrius.hpp>

namespace rivet::ddl::generated {
	NefariousFinalePortalPrius::NefariousFinalePortalPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		DesiredOpenTime = serialized->get_float(DesiredOpenTime_type_id, 0.500000f);
		DesiredCloseTime = serialized->get_float(DesiredCloseTime_type_id, 0.500000f);
		DestroyDelayAfterClose = serialized->get_float(DestroyDelayAfterClose_type_id, 0.100000f); 
	}

	[[nodiscard]] auto
	NefariousFinalePortalPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	NefariousFinalePortalPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<NefariousFinalePortalPrius> {
		if (incoming_type_id == NefariousFinalePortalPrius::type_id) {
			return std::make_shared<NefariousFinalePortalPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
