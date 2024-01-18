// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/DdlDefaultFallbackHeapInfo.hpp>

namespace rivet::ddl::generated {
	DdlDefaultFallbackHeapInfo::DdlDefaultFallbackHeapInfo([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		AllowHeap = serialized->get_bool(AllowHeap_type_id, true);
		InitialMaxAllocs = serialized->get_uint64(InitialMaxAllocs_type_id, 4096ull); 
	}

	[[nodiscard]] auto
	DdlDefaultFallbackHeapInfo::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	DdlDefaultFallbackHeapInfo::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<DdlDefaultFallbackHeapInfo> {
		if (incoming_type_id == DdlDefaultFallbackHeapInfo::type_id) {
			return std::make_shared<DdlDefaultFallbackHeapInfo>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
