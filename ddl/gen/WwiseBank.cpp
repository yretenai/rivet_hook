// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WwiseBank.hpp>

namespace rivet::ddl::generated {
	WwiseBank::WwiseBank([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		SoundBankId = serialized->get_uint64(SoundBankId_type_id, 0ull); 
	}

	[[nodiscard]] auto
	WwiseBank::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WwiseBank::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WwiseBank> {
		if (incoming_type_id == WwiseBank::type_id) {
			return std::make_shared<WwiseBank>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
