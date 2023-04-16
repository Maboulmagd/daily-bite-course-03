#include "catch2/catch_test_macros.hpp"
#include "catch2/matchers/catch_matchers_floating_point.hpp"
#include "words.h"

TEST_CASE("to_words") {
  SECTION("Empty input") {
    std::string input = "";
    std::vector<std::string> expected_output = {};
    REQUIRE(to_words(input) == expected_output);
  }

  SECTION("Single word input") {
    std::string input = "word";
    std::vector<std::string> expected_output = {"word"};
    REQUIRE(to_words(input) == expected_output);
  }

  SECTION("Multiple words with single spaces") {
    std::string input = "Hello world!";
    std::vector<std::string> expected_output = {"Hello", "world!"};
    REQUIRE(to_words(input) == expected_output);
  }

  SECTION("Multiple words with multiple spaces") {
    std::string input = "Hello    world!";
    std::vector<std::string> expected_output = {"Hello", "world!"};
    REQUIRE(to_words(input) == expected_output);
  }

  SECTION("Spaces at the beginning and end") {
    std::string input = "  Hello world!  ";
    std::vector<std::string> expected_output = {"Hello", "world!"};
    REQUIRE(to_words(input) == expected_output);
  }

  SECTION("All spaces input") {
    std::string input = "   ";
    std::vector<std::string> expected_output = {};
    REQUIRE(to_words(input) == expected_output);
  }

  SECTION("Mixed spaces and words") {
    std::string input = "  The quick   brown  fox  jumps    ";
    std::vector<std::string> expected_output = {"The", "quick", "brown", "fox",
                                                "jumps"};
    REQUIRE(to_words(input) == expected_output);
  }
}