// rivet project
// Copyright (c) 2023 <https://github.com/yretenai/rivet>
// SPDX-License-Identifier: MPL-2.0

#pragma once

#include <array>
#include <cstdint>
#include <memory>
#include <optional>
#include <ostream>
#include <string_view>
#include <utility>
#include <vector>

#include <rivet/rivet_keywords.hpp>
#include <rivet/structures/rivet_archive.hpp>
#include <rivet/structures/rivet_asset.hpp>

namespace rivet::helpers {
	std::array<std::string_view, 0xFF> rivet_locale_enum {
		"None",		  "English",  "EnglishGB", "Danish",	 "Dutch",		 "Finnish",	 "French",	"German",		"Italian",			 "Japanese",		   "Korean",   "Norwegian", "Polish",
		"Portuguese", "Russian",  "Spanish",   "Swedish",	 "PortugueseBR", "Arabic",	 "Turkish", "SpanishLATAM", "ChineseSimplified", "ChineseTraditional", "FrenchCA", "Czech",		"Hungarian",
		"Greek",	  "Romanian", "Thai",	   "Vietnamese", "Indonesian",	 "Croatian",
	};

	std::array<std::string_view, 0xFF> rivet_asset_type_enum {
		"LEVEL",	  "ZONE",	"ACTOR",	 "CONDUIT",		 "CONFIG", "CINEMATIC2", "MODEL",		  "ANIMATION_CLIP", "ANIMATION_SET", "MATERIAL", "MATERIAL_GRAPH", "TEXTURE",
		"ATMOSPHERE", "EFFECT", "SOUNDBANK", "LOCALIZATION", {},	   {},			 "ZONE_LIGHTING", "LEVEL_LIGHTING", "NODE_GRAPH",	 {},		 "WWISE_LOOKUP",
	};

	std::array<std::string_view, static_cast<int>(rivet::rivet_asset_category::Max)> rivet_asset_category_enum { "Game", "AudioStream", "AnimationStream", "ZoneLightBin" };

} // namespace rivet::helpers

auto
operator<<(std::ostream &out, const rivet::structures::rivet_archive &archive) -> std::ostream & {
	return out << "rivet_archive { "
			   << "name: " << archive.name << ", "
			   << "time: " << archive.time << ", "
			   << "version: " << archive.version << ", "
			   << "unknown: " << archive.unknown << ", "
			   << "load_priority: " << archive.load_priority << " }";
}

auto
operator<<(std::ostream &out, const rivet::rivet_locale &locale) -> std::ostream & {
	auto index = static_cast<uint32_t>(locale);
	if (index >= rivet::helpers::rivet_locale_enum.size()) {
		return out << "UnknownLocale" << index;
	}

	if (rivet::helpers::rivet_locale_enum[index].empty()) {
		return out << "UnknownLocale" << index;
	}

	return out << rivet::helpers::rivet_locale_enum[index];
}

auto
operator<<(std::ostream &out, const rivet::structures::rivet_asset_type &type) -> std::ostream & {
	auto index = static_cast<uint32_t>(type);
	if (index >= rivet::helpers::rivet_asset_type_enum.size()) {
		return out << "UNKNOWN_TYPE_" << index;
	}

	if (rivet::helpers::rivet_asset_type_enum[index].empty()) {
		return out << "UNKNOWN_TYPE_" << index;
	}

	return out << rivet::helpers::rivet_asset_type_enum[index];
}

auto
operator<<(std::ostream &out, const rivet::rivet_asset_category &category) -> std::ostream & {
	auto index = static_cast<uint32_t>(category);
	if (index >= rivet::helpers::rivet_asset_category_enum.size()) {
		return out << "UnknownCategory" << index;
	}

	return out << rivet::helpers::rivet_asset_category_enum[index];
}

auto
operator<<(std::ostream &out, const rivet::structures::rivet_asset_flags &flags) -> std::ostream & {
	return out << "rivet_asset_flags { "
			   << "is_stream: " << flags.is_stream << ", "
			   << "is_texture: " << flags.is_texture << ", "
			   << "has_header: " << flags.has_header << ", "
			   << "is_virtual: " << flags.is_virtual << ", "
			   << "is_key: " << flags.is_key << " }";
}

auto
operator<<(std::ostream &out, const std::vector<std::pair<std::string_view, rivet::rivet_asset_id>> &dependencies) -> std::ostream & {
	out << "{ ";
	for (auto i = 0; i < dependencies.size(); i++) {
		out << dependencies.at(i).first;
		if (i != dependencies.size() - 1) {
			out << ", ";
		}
	}
	return out << " }";
}

auto
operator<<(std::ostream &out, const rivet::structures::rivet_asset &asset) -> std::ostream & {
	return out << "rivet_asset { "
			   << "name: " << asset.name.value_or("null") << ", "
			   << "size: " << asset.size << ", "
			   << "archive: " << asset.archive->name << ", "
			   << "offset: " << asset.offset << ", "
			   << "locale: " << asset.locale << ", "
			   << "category: " << asset.category << ", "
			   << "flags: " << asset.flags << ", "
			   << "dependencies: " << asset.dependencies << " }";
}
