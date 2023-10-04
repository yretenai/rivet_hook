// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PyrocitorEmberShotPrius.hpp>

namespace rivet::ddl::generated {
	PyrocitorEmberShotPrius::PyrocitorEmberShotPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeShotPrius(serialized) {

	}

	[[nodiscard]] auto
	PyrocitorEmberShotPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PyrocitorEmberShotPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PyrocitorEmberShotPrius> {
		if (incoming_type_id == PyrocitorEmberShotPrius::type_id) {
			return std::make_shared<PyrocitorEmberShotPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
