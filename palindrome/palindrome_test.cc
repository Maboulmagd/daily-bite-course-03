#include "catch2/catch_test_macros.hpp"
#include "catch2/matchers/catch_matchers_floating_point.hpp"
#include "palindrome.h"

TEST_CASE("is_palindrome") {
  SECTION("Basic test cases") {
    REQUIRE(is_palindrome("racecar") == true);
    REQUIRE(is_palindrome("hello") == false);
    REQUIRE(is_palindrome("12321") == true);
    REQUIRE(is_palindrome("12345") == false);
  }

  SECTION("Case sensitivity") {
    REQUIRE(is_palindrome("aibohphobia") == true);
    REQUIRE(is_palindrome("AibohphobiA") == true);
    REQUIRE(is_palindrome("Aibohphobia") == false);
  }

  SECTION("Empty string and single character") {
    REQUIRE(is_palindrome("") == true);
    REQUIRE(is_palindrome("a") == true);
    REQUIRE(is_palindrome("Z") == true);
  }

  SECTION("Special characters and whitespace") {
    REQUIRE(is_palindrome(".,?!") == false);
    REQUIRE(is_palindrome("   ") == true);
    REQUIRE(is_palindrome("Was it a car or a cat I saw?") == false);
  }
}
