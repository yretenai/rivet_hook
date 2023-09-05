// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ShellCasingDataMultiEmit.hpp>

namespace rivet::ddl::generated {
	ShellCasingDataMultiEmit::ShellCasingDataMultiEmit([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ShellCasingData(serialized) {
		SpawnLocator = serialized->get_strings(SpawnLocator_type_id); 
	}

	auto
	ShellCasingDataMultiEmit::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	ShellCasingDataMultiEmit::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	ShellCasingDataMultiEmit::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<ShellCasingDataMultiEmit> {
		if (incoming_type_id == ShellCasingDataMultiEmit::type_id) {
			return std::make_shared<ShellCasingDataMultiEmit>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated