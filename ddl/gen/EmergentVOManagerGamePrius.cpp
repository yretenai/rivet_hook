// <auto-generated>
// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#include <rivet/ddl/generated/EmergentVOManagerBotPrius.hpp>
#include <rivet/ddl/generated/EmergentVOManagerHeroPrius.hpp>
#include <rivet/ddl/generated/EmergentVOManagerHeroCompanionPrius.hpp>
#include <rivet/ddl/generated/EmergentVOManagerStandardPrius.hpp>
#include <rivet/ddl/generated/EmergentVOManagerUIPrius.hpp>
#include <rivet/ddl/generated/EmergentVOManagerZurkonPrius.hpp> 

#include <rivet/ddl/generated/EmergentVOManagerGamePrius.hpp>

namespace rivet::ddl::generated {
	EmergentVOManagerGamePrius::EmergentVOManagerGamePrius([[maybe_unused]] const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized): EmergentVOManagerBasePrius(serialized) {

	}

	[[nodiscard]] auto
	EmergentVOManagerGamePrius::get_type_name() const noexcept -> std::string_view {
		return type_name;
	}

	[[nodiscard]] auto
	EmergentVOManagerGamePrius::from_substruct(rivet_type_id incoming_type_id, const std::shared_ptr<const rivet::structures::rivet_serialized_object> &serialized) -> std::shared_ptr<EmergentVOManagerGamePrius> {
		if (incoming_type_id == EmergentVOManagerGamePrius::type_id) {
			return std::make_shared<EmergentVOManagerGamePrius>(serialized);
		}

		auto EmergentVOManagerBotPrius_ptr = EmergentVOManagerBotPrius::from_substruct(incoming_type_id, serialized);
		if (EmergentVOManagerBotPrius_ptr != nullptr) {
			return EmergentVOManagerBotPrius_ptr;
		}

		auto EmergentVOManagerHeroCompanionPrius_ptr = EmergentVOManagerHeroCompanionPrius::from_substruct(incoming_type_id, serialized);
		if (EmergentVOManagerHeroCompanionPrius_ptr != nullptr) {
			return EmergentVOManagerHeroCompanionPrius_ptr;
		}

		auto EmergentVOManagerStandardPrius_ptr = EmergentVOManagerStandardPrius::from_substruct(incoming_type_id, serialized);
		if (EmergentVOManagerStandardPrius_ptr != nullptr) {
			return EmergentVOManagerStandardPrius_ptr;
		}

		auto EmergentVOManagerUIPrius_ptr = EmergentVOManagerUIPrius::from_substruct(incoming_type_id, serialized);
		if (EmergentVOManagerUIPrius_ptr != nullptr) {
			return EmergentVOManagerUIPrius_ptr;
		}

		auto EmergentVOManagerHeroPrius_ptr = EmergentVOManagerHeroPrius::from_substruct(incoming_type_id, serialized);
		if (EmergentVOManagerHeroPrius_ptr != nullptr) {
			return EmergentVOManagerHeroPrius_ptr;
		}

		auto EmergentVOManagerZurkonPrius_ptr = EmergentVOManagerZurkonPrius::from_substruct(incoming_type_id, serialized);
		if (EmergentVOManagerZurkonPrius_ptr != nullptr) {
			return EmergentVOManagerZurkonPrius_ptr;
		}
 
		return nullptr;
	}
} // namespace rivet::ddl::generated
