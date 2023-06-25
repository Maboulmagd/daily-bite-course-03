#include "words.h"

#include <iterator>
#include <sstream>

std::vector<std::string> to_words(std::string text) {

  // Library solution:

  // std::istringstream iss(text);
  // return std::vector<std::string>{std::istream_iterator<std::string>{iss},
  //                                 std::istream_iterator<std::string>()};

  // My own implementation

  std::vector<std::string> words;
  std::string word;

  for (const char &c : text) {
    if (c != ' ') {
      word += c;
    } else {
      if (!word.empty()) {
        words.push_back(word);
      } // word could be empty here...
      word.clear();
    }
  }
  if (!word.empty()) { // Last word
    words.push_back(word);
  }

  return words;
}