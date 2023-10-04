// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PartialReactStandardPrius.hpp>
#include <rivet/ddl/generated/PartialReactGamePrius.hpp> 

#include <rivet/ddl/generated/PartialReactBasePrius.hpp>

namespace rivet::ddl::generated {
	PartialReactBasePrius::PartialReactBasePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): PartialReactNonePrius(serialized) {

	}

	[[nodiscard]] auto
	PartialReactBasePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PartialReactBasePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PartialReactBasePrius> {
		if (incoming_type_id == PartialReactBasePrius::type_id) {
			return std::make_shared<PartialReactBasePrius>(serialized);
		}

		auto PartialReactStandardPrius_ptr = PartialReactStandardPrius::from_substruct(incoming_type_id, serialized);
		if (PartialReactStandardPrius_ptr != nullptr) {
			return PartialReactStandardPrius_ptr;
		}

		auto PartialReactGamePrius_ptr = PartialReactGamePrius::from_substruct(incoming_type_id, serialized);
		if (PartialReactGamePrius_ptr != nullptr) {
			return PartialReactGamePrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
