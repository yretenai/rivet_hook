// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/IntroActorDataPrius.hpp>

namespace rivet::ddl::generated {
	IntroActorDataPrius::IntroActorDataPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): IntroDataPrius(serialized) {
		IntroActor = serialized->get_uint64(IntroActor_type_id, 0ull); 
	}

	[[nodiscard]] auto
	IntroActorDataPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	IntroActorDataPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<IntroActorDataPrius> {
		if (incoming_type_id == IntroActorDataPrius::type_id) {
			return std::make_shared<IntroActorDataPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
