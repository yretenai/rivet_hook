// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeadSizeMapping.hpp>

namespace rivet::ddl::generated {
	HeadSizeMapping::HeadSizeMapping([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SizeLabel = serialized->get_string(SizeLabel_type_id, {});
		Scale = serialized->get_float(Scale_type_id, 1.000000f); 
	}

	[[nodiscard]] auto
	HeadSizeMapping::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeadSizeMapping::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeadSizeMapping> {
		if (incoming_type_id == HeadSizeMapping::type_id) {
			return std::make_shared<HeadSizeMapping>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
