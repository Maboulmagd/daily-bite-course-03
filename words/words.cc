#include "words.h"

#include <iterator>
#include <sstream>

std::vector<std::string> to_words(std::string text) {

  std::istringstream iss(text);
  return std::vector<std::string>{std::istream_iterator<std::string>{iss},
                                  std::istream_iterator<std::string>()};
}