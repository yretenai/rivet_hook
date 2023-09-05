// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TimedExplosion.hpp>

namespace rivet::ddl::generated {
	TimedExplosion::TimedExplosion([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): GrenadeExplosionMode(serialized) {
		ReleasedTime = serialized->get_float(ReleasedTime_type_id); 
	}

	auto
	TimedExplosion::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	TimedExplosion::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TimedExplosion::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TimedExplosion> {
		if (incoming_type_id == TimedExplosion::type_id) {
			return std::make_shared<TimedExplosion>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated