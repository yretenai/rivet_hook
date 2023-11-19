// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/LookAtOfferPrius.hpp>

namespace rivet::ddl::generated {
	LookAtOfferPrius::LookAtOfferPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): OfferPrius(serialized) {

	}

	[[nodiscard]] auto
	LookAtOfferPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	LookAtOfferPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<LookAtOfferPrius> {
		if (incoming_type_id == LookAtOfferPrius::type_id) {
			return std::make_shared<LookAtOfferPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated