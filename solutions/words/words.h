#pragma once

#include <string>
#include <vector>

/** \brief Splits the provided text into words.
 *
 * Spaces are treated as delimiters. Multiple spaces are treated as one.
 */
std::vector<std::string> to_words(std::string text);