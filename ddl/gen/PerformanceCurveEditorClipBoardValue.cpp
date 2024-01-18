// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/PerformanceCurveEditorClipBoardKey.hpp> 

#include <rivet/ddl/generated/PerformanceCurveEditorClipBoardValue.hpp>

namespace rivet::ddl::generated {
	PerformanceCurveEditorClipBoardValue::PerformanceCurveEditorClipBoardValue([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Dimension = serialized->get_int32(Dimension_type_id, 0u);
		KeyListName = serialized->get_string(KeyListName_type_id, {});
		Value = serialized->unwrap_into<rivet::ddl::generated::PerformanceCurveEditorClipBoardKey>(Value_type_id); 
	}

	[[nodiscard]] auto
	PerformanceCurveEditorClipBoardValue::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	PerformanceCurveEditorClipBoardValue::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<PerformanceCurveEditorClipBoardValue> {
		if (incoming_type_id == PerformanceCurveEditorClipBoardValue::type_id) {
			return std::make_shared<PerformanceCurveEditorClipBoardValue>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
