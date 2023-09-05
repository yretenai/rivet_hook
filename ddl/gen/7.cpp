// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/AccessibilityOptionTypeHeader.hpp>
#include <rivet/ddl/generated/AccessibilityOptionTypeShortcut.hpp> 

#include <rivet/ddl/generated/AccessibilityOptionTypeBase.hpp>

namespace rivet::ddl::generated {
	AccessibilityOptionTypeBase::AccessibilityOptionTypeBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {

	}

	auto
	AccessibilityOptionTypeBase::get_type_id() const noexcept -> rivet::rivet_type_id {
		return type_id;
	}

	[[nodiscard]] auto
	AccessibilityOptionTypeBase::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	AccessibilityOptionTypeBase::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<AccessibilityOptionTypeBase> {
		if (incoming_type_id == AccessibilityOptionTypeBase::type_id) {
			return std::make_shared<AccessibilityOptionTypeBase>(serialized);
		}

		auto AccessibilityOptionTypeHeader_ptr = AccessibilityOptionTypeHeader::from_substruct(incoming_type_id, serialized);
		if (AccessibilityOptionTypeHeader_ptr != nullptr) {
			return AccessibilityOptionTypeHeader_ptr;
		}

		auto AccessibilityOptionTypeShortcut_ptr = AccessibilityOptionTypeShortcut::from_substruct(incoming_type_id, serialized);
		if (AccessibilityOptionTypeShortcut_ptr != nullptr) {
			return AccessibilityOptionTypeShortcut_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated