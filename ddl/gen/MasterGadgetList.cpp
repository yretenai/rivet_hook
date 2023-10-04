// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GadgetListElement.hpp> 

#include <rivet/ddl/generated/MasterGadgetList.hpp>

namespace rivet::ddl::generated {
	MasterGadgetList::MasterGadgetList([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		Gadgets = serialized->unwrap_into_many<rivet::ddl::generated::GadgetListElement>(Gadgets_type_id); 
	}

	[[nodiscard]] auto
	MasterGadgetList::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	MasterGadgetList::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<MasterGadgetList> {
		if (incoming_type_id == MasterGadgetList::type_id) {
			return std::make_shared<MasterGadgetList>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated