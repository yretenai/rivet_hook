// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AmmoConfigBase.hpp>

namespace rivet::ddl::generated {
	AmmoConfigBase::AmmoConfigBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		MaxReserveAmmo = serialized->get_uint32(MaxReserveAmmo_type_id); 
	}

	[[nodiscard]] auto
	AmmoConfigBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AmmoConfigBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AmmoConfigBase> {
		if (incoming_type_id == AmmoConfigBase::type_id) {
			return std::make_shared<AmmoConfigBase>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated