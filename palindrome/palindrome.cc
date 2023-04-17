#include "palindrome.h"

bool is_palindrome(std::string text) {
  const auto text_len = text.length();

  int i = 0;
  int j = text_len - 1;

  int end = j / 2;
  bool res = true;

  while (i < end) {
    if (text[i++] != text[j--]) {
      res = false;
      break;
    }
  }

  return res;
}