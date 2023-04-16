#include "catch2/catch_test_macros.hpp"
#include "catch2/matchers/catch_matchers_floating_point.hpp"
#include "point.h"

TEST_CASE("translate_x and translate_y translate points correctly") {
  Point origin{0.0, 0.0};
  Point test_point{3.0, 4.0};
  double offset = 5.0;

  SECTION("translate_x") {
    Point translated_point = translate_x(test_point, offset);
    Point expected_point{test_point.x + offset, test_point.y};
    REQUIRE(translated_point.x == expected_point.x);
    REQUIRE(translated_point.y == expected_point.y);
  }

  SECTION("translate_y") {
    Point translated_point = translate_y(test_point, offset);
    Point expected_point{test_point.x, test_point.y + offset};
    REQUIRE(translated_point.x == expected_point.x);
    REQUIRE(translated_point.y == expected_point.y);
  }

  SECTION("translate_x with origin") {
    Point translated_point = translate_x(origin, offset);
    Point expected_point{origin.x + offset, origin.y};
    REQUIRE(translated_point.x == expected_point.x);
    REQUIRE(translated_point.y == expected_point.y);
  }

  SECTION("translate_y with origin") {
    Point translated_point = translate_y(origin, offset);
    Point expected_point{origin.x, origin.y + offset};
    REQUIRE(translated_point.x == expected_point.x);
    REQUIRE(translated_point.y == expected_point.y);
  }

  SECTION("translate_x with negative offset") {
    Point translated_point = translate_x(test_point, -offset);
    Point expected_point{test_point.x - offset, test_point.y};
    REQUIRE(translated_point.x == expected_point.x);
    REQUIRE(translated_point.y == expected_point.y);
  }

  SECTION("translate_y with negative offset") {
    Point translated_point = translate_y(test_point, -offset);
    Point expected_point{test_point.x, test_point.y - offset};
    REQUIRE(translated_point.x == expected_point.x);
    REQUIRE(translated_point.y == expected_point.y);
  }
}