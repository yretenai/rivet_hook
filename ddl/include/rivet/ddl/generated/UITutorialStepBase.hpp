// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

// clang-format off

#include <cstdint>
#include <memory>
#include <string_view>
#include <vector>

#include <rivet/hash/type_id.hpp>
#include <rivet/rivet_array.hpp>
#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_serialization.hpp>

namespace rivet::ddl::generated {
	struct DDLVector2;
	struct UITutorialModalButton;
	struct UITutorialAllowableInput; 

	struct RIVET_DDL_SHARED UITutorialStepBase : rivet::structures::rivet_ddl_base {
		constexpr const static std::string_view type_name = "UITutorialStepBase";
		constexpr const static rivet::rivet_type_id type_id = 0x61fbfd47;

		constexpr const static std::string_view Text_type_name = "Text";
		constexpr const static rivet::rivet_type_id Text_type_id = 0xb1b6777;
		constexpr const static std::string_view PostStepVO_type_name = "PostStepVO";
		constexpr const static rivet::rivet_type_id PostStepVO_type_id = 0xa3146a0d;
		constexpr const static std::string_view AllowableInputs_type_name = "AllowableInputs";
		constexpr const static rivet::rivet_type_id AllowableInputs_type_id = 0x373690c8;
		constexpr const static std::string_view ModalButton_type_name = "ModalButton";
		constexpr const static rivet::rivet_type_id ModalButton_type_id = 0x80473a41;
		constexpr const static std::string_view ElementPosition_type_name = "ElementPosition";
		constexpr const static rivet::rivet_type_id ElementPosition_type_id = 0x3f12f707; 

		explicit UITutorialStepBase() = default;
		explicit UITutorialStepBase([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized);

		std::string_view Text {};
		std::string_view PostStepVO {};
		std::vector<std::shared_ptr<rivet::ddl::generated::UITutorialAllowableInput>> AllowableInputs {};
		std::shared_ptr<rivet::ddl::generated::UITutorialModalButton> ModalButton {};
		std::shared_ptr<rivet::ddl::generated::DDLVector2> ElementPosition {}; 

		[[nodiscard]] auto
		get_type_name() const noexcept -> std::string_view override;

		[[nodiscard]] static auto
		from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<UITutorialStepBase>;
	};
} // namespace rivet::ddl::generated

// clang-format on
