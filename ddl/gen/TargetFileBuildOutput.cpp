// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/TargetFileBuildOutput.hpp>

namespace rivet::ddl::generated {
	TargetFileBuildOutput::TargetFileBuildOutput([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Messages = serialized->get_strings(Messages_type_id);
		MessageFormatStrings = serialized->get_strings(MessageFormatStrings_type_id);
		MessageIsValidation = serialized->get_bools(MessageIsValidation_type_id);
		Levels = serialized->get_int32s(Levels_type_id); 
	}

	[[nodiscard]] auto
	TargetFileBuildOutput::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TargetFileBuildOutput::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TargetFileBuildOutput> {
		if (incoming_type_id == TargetFileBuildOutput::type_id) {
			return std::make_shared<TargetFileBuildOutput>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated