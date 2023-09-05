// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PoolSharkAwarenessPrius.hpp>

namespace rivet::ddl::generated {
	PoolSharkAwarenessPrius::PoolSharkAwarenessPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OmniAwarenessPrius(serialized) {

	}

	auto
	PoolSharkAwarenessPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	PoolSharkAwarenessPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PoolSharkAwarenessPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PoolSharkAwarenessPrius> {
		if (incoming_type_id == PoolSharkAwarenessPrius::type_id) {
			return std::make_shared<PoolSharkAwarenessPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated