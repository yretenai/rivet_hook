// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/HeroIceBlockPrius.hpp>

namespace rivet::ddl::generated {
	HeroIceBlockPrius::HeroIceBlockPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Flags = serialized->get_bitset<rivet::ddl::generated::x3ebe0bf2>(Flags_type_id, rivet::ddl::generated::x3ebe0bf2_values, 0u); 
	}

	[[nodiscard]] auto
	HeroIceBlockPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	HeroIceBlockPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<HeroIceBlockPrius> {
		if (incoming_type_id == HeroIceBlockPrius::type_id) {
			return std::make_shared<HeroIceBlockPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
