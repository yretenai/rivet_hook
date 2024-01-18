// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/GPUProgramDesc.hpp>

namespace rivet::ddl::generated {
	GPUProgramDesc::GPUProgramDesc([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): rivet::structures::rivet_ddl_base(serialized) {
		PSTextureMask = serialized->get_uint32(PSTextureMask_type_id, 0u);
		PSInterpMask = serialized->get_uint32(PSInterpMask_type_id, 0u);
		DSTextureMask = serialized->get_uint32(DSTextureMask_type_id, 0u);
		DSInterpMask = serialized->get_uint32(DSInterpMask_type_id, 0u);
		HSTextureMask = serialized->get_uint32(HSTextureMask_type_id, 0u);
		HSInterpMask = serialized->get_uint32(HSInterpMask_type_id, 0u);
		VSTextureMask = serialized->get_uint32(VSTextureMask_type_id, 0u);
		VSInterpMask = serialized->get_uint32(VSInterpMask_type_id, 0u); 
	}

	[[nodiscard]] auto
	GPUProgramDesc::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	GPUProgramDesc::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<GPUProgramDesc> {
		if (incoming_type_id == GPUProgramDesc::type_id) {
			return std::make_shared<GPUProgramDesc>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
