// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/OmniDelayAwarenessPrius.hpp>
#include <rivet/ddl/generated/DoomBotAwarenessPrius.hpp>
#include <rivet/ddl/generated/WaterAwarenessPrius.hpp>
#include <rivet/ddl/generated/RapidOmniAwarenessPrius.hpp>
#include <rivet/ddl/generated/PoolSharkAwarenessPrius.hpp> 

#include <rivet/ddl/generated/OmniAwarenessPrius.hpp>

namespace rivet::ddl::generated {
	OmniAwarenessPrius::OmniAwarenessPrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): AwarenessBasePrius(serialized) {
		Range = serialized->get_float(Range_type_id);
		OmniAwarenessLos = serialized->get_enum<rivet::ddl::generated::OmniAwarenessLos>(OmniAwarenessLos_type_id, rivet::ddl::generated::OmniAwarenessLos_values);
		SourceLocatorName = serialized->get_string(SourceLocatorName_type_id); 
	}

	[[nodiscard]] auto
	OmniAwarenessPrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	OmniAwarenessPrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<OmniAwarenessPrius> {
		if (incoming_type_id == OmniAwarenessPrius::type_id) {
			return std::make_shared<OmniAwarenessPrius>(serialized);
		}

		auto OmniDelayAwarenessPrius_ptr = OmniDelayAwarenessPrius::from_substruct(incoming_type_id, serialized);
		if (OmniDelayAwarenessPrius_ptr != nullptr) {
			return OmniDelayAwarenessPrius_ptr;
		}

		auto DoomBotAwarenessPrius_ptr = DoomBotAwarenessPrius::from_substruct(incoming_type_id, serialized);
		if (DoomBotAwarenessPrius_ptr != nullptr) {
			return DoomBotAwarenessPrius_ptr;
		}

		auto WaterAwarenessPrius_ptr = WaterAwarenessPrius::from_substruct(incoming_type_id, serialized);
		if (WaterAwarenessPrius_ptr != nullptr) {
			return WaterAwarenessPrius_ptr;
		}

		auto PoolSharkAwarenessPrius_ptr = PoolSharkAwarenessPrius::from_substruct(incoming_type_id, serialized);
		if (PoolSharkAwarenessPrius_ptr != nullptr) {
			return PoolSharkAwarenessPrius_ptr;
		}

		auto RapidOmniAwarenessPrius_ptr = RapidOmniAwarenessPrius::from_substruct(incoming_type_id, serialized);
		if (RapidOmniAwarenessPrius_ptr != nullptr) {
			return RapidOmniAwarenessPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated