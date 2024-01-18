// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/FlavorAnimIndex.hpp>

namespace rivet::ddl::generated {
	FlavorAnimIndex::FlavorAnimIndex([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Weight = serialized->get_float(Weight_type_id, 1.000000f);
		CanDuplicate = serialized->get_bool(CanDuplicate_type_id, false); 
	}

	[[nodiscard]] auto
	FlavorAnimIndex::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	FlavorAnimIndex::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<FlavorAnimIndex> {
		if (incoming_type_id == FlavorAnimIndex::type_id) {
			return std::make_shared<FlavorAnimIndex>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
