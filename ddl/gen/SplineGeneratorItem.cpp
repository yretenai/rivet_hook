// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/SplineGenerator.hpp> 

#include <rivet/ddl/generated/SplineGeneratorItem.hpp>

namespace rivet::ddl::generated {
	SplineGeneratorItem::SplineGeneratorItem([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SplineGenerators = serialized->unwrap_into<rivet::ddl::generated::SplineGenerator>(SplineGenerators_type_id); 
	}

	[[nodiscard]] auto
	SplineGeneratorItem::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	SplineGeneratorItem::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<SplineGeneratorItem> {
		if (incoming_type_id == SplineGeneratorItem::type_id) {
			return std::make_shared<SplineGeneratorItem>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated