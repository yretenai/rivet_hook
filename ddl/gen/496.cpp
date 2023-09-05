// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/BasicEmitterPrius.hpp>

namespace rivet::ddl::generated {
	BasicEmitterPrius::BasicEmitterPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): WeaponEmitterBasePrius(serialized) {
		EmitFromUser = serialized->get_bool(EmitFromUser_type_id); 
	}

	auto
	BasicEmitterPrius::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	BasicEmitterPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	BasicEmitterPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<BasicEmitterPrius> {
		if (incoming_type_id == BasicEmitterPrius::type_id) {
			return std::make_shared<BasicEmitterPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated