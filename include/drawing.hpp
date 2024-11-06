/// @file include/drawings.hpp
/// @date November 2024

#ifndef AWFULFETCH_DRAWING_HPP_
#define AWFULFETCH_DRAWING_HPP_

namespace Drawing {

/// @brief Contains box drawing characters
/// Characters are named accordingly to their unicode names.
namespace BoxDrawings {

// Arcs
const wchar_t kBoxDrawingsLightArcDownAndLeft       = L'╮';
const wchar_t kBoxDrawingsLightArcDownAndRight      = L'╭';
const wchar_t kBoxDrawingsLightArcUpAndLeft         = L'╯';
const wchar_t kBoxDrawingsLightArcUpAndRightndRight = L'╰';
// Lines
const wchar_t kBoxDrawingsLightHorizontal = L'─';
const wchar_t kBoxDrawingsLightVertical   = L'│';

} // namespace BoxDrawings

} // namespace Drawing

#endif /* AWFULFETCH_DRAWING_HPP_ */
