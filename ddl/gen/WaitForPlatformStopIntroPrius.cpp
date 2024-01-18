// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/WaitForPlatformStopIntroPrius.hpp>

namespace rivet::ddl::generated {
	WaitForPlatformStopIntroPrius::WaitForPlatformStopIntroPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		Platform = serialized->get_uint64(Platform_type_id, 0ull);
		OptionalStopDest = serialized->get_int32(OptionalStopDest_type_id, -1); 
	}

	[[nodiscard]] auto
	WaitForPlatformStopIntroPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	WaitForPlatformStopIntroPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<WaitForPlatformStopIntroPrius> {
		if (incoming_type_id == WaitForPlatformStopIntroPrius::type_id) {
			return std::make_shared<WaitForPlatformStopIntroPrius>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
