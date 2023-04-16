#include "words.h"

std::vector<std::string> to_words(std::string text) {
  std::vector<std::string> result;

  int64_t idx = 0;
  while (idx < std::ssize(text)) {
    // skip over leading spaces
    if (text[idx] == ' ') {
      ++idx;
      continue;
    }
    // we are not at the end of the string
    // and the next character is not a space

    // find the next space

    // Note that find_first_of returns a std::size_t and in this case we cannot
    // just convert it to int64_t since it can also return std::string::npos
    // which is out of range for int64_t.
    std::size_t pos = text.find_first_of(' ', idx);
    // space not found, this is the last word
    if (pos == std::string::npos) {
      // substring from current index until the end of the string
      result.push_back(text.substr(idx));
      // end the loop
      break;
    }
    // space found
    result.push_back(text.substr(idx, pos - idx));
    idx = pos;
  }
  return result;
}