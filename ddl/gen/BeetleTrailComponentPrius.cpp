// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BeetleTrailComponentPrius.hpp>

namespace rivet::ddl::generated {
	BeetleTrailComponentPrius::BeetleTrailComponentPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	[[nodiscard]] auto
	BeetleTrailComponentPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BeetleTrailComponentPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BeetleTrailComponentPrius> {
		if (incoming_type_id == BeetleTrailComponentPrius::type_id) {
			return std::make_shared<BeetleTrailComponentPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated