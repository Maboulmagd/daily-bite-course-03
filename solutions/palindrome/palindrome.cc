#include "palindrome.h"

bool is_palindrome(std::string text) {
  // take two indexes, left and right border
  int64_t left = 0;
  int64_t right = std::ssize(text) - 1;

  // as long as they do not cross
  while (left < right) {
    // compare, return false if not equal
    if (text[left] != text[right])
      return false;

    // and advance both
    ++left;
    --right;
  }
  return true;
}

/* A more idiomatic solution relying on the standard library
#include <algorithm>

bool is_palindrome(std::string text) {
  return std::equal(text.begin(), text.end(), text.rbegin(), text.rend());
}
*/