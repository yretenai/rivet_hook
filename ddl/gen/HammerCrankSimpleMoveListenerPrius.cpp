// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HammerCrankSimpleMoveListenerPrius.hpp>

namespace rivet::ddl::generated {
	HammerCrankSimpleMoveListenerPrius::HammerCrankSimpleMoveListenerPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		HammerCrank = serialized->get_uint64(HammerCrank_type_id, 0ull);
		StartVol = serialized->get_uint64(StartVol_type_id, 0ull);
		EndVol = serialized->get_uint64(EndVol_type_id, 0ull); 
	}

	[[nodiscard]] auto
	HammerCrankSimpleMoveListenerPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HammerCrankSimpleMoveListenerPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HammerCrankSimpleMoveListenerPrius> {
		if (incoming_type_id == HammerCrankSimpleMoveListenerPrius::type_id) {
			return std::make_shared<HammerCrankSimpleMoveListenerPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
