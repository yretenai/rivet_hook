// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/ClassModifierDef.hpp> 

#include <rivet/ddl/generated/TradingCardClassConfig.hpp>

namespace rivet::ddl::generated {
	TradingCardClassConfig::TradingCardClassConfig([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): ConfigBase(serialized) {
		ClassA = serialized->unwrap_into<rivet::ddl::generated::ClassModifierDef>(ClassA_type_id);
		ClassB = serialized->unwrap_into<rivet::ddl::generated::ClassModifierDef>(ClassB_type_id);
		ClassC = serialized->unwrap_into<rivet::ddl::generated::ClassModifierDef>(ClassC_type_id); 
	}

	[[nodiscard]] auto
	TradingCardClassConfig::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	TradingCardClassConfig::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<TradingCardClassConfig> {
		if (incoming_type_id == TradingCardClassConfig::type_id) {
			return std::make_shared<TradingCardClassConfig>(serialized);
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
