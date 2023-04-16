#include "catch2/catch_test_macros.hpp"
#include "catch2/matchers/catch_matchers_floating_point.hpp"
#include "circles.h"

TEST_CASE("filter_circles") {
  Circle c1 = {{0, 0}, 1};
  Circle c2 = {{0, 0}, 2};
  Circle c3 = {{0, 0}, 3};

  double area1 = std::numbers::pi * c1.radius * c1.radius;
  double area2 = std::numbers::pi * c2.radius * c2.radius;
  double area3 = std::numbers::pi * c3.radius * c3.radius;

  SECTION("Basic test cases") {
    std::vector<Circle> input = {c1, c2, c3};
    std::vector<Circle> output;

    output = filter_circles(input, area1);
    REQUIRE(output.size() == 2);
    REQUIRE(output[0].radius == c2.radius);
    REQUIRE(output[1].radius == c3.radius);

    output = filter_circles(input, area2);
    REQUIRE(output.size() == 1);
    REQUIRE(output[0].radius == c3.radius);

    output = filter_circles(input, area3);
    REQUIRE(output.size() == 0);
  }

  SECTION("Empty input") {
    std::vector<Circle> input = {};
    std::vector<Circle> output = filter_circles(input, 1.0);
    REQUIRE(output.size() == 0);
  }

  SECTION("Threshold special values") {
    std::vector<Circle> input = {c1, c2, c3};
    std::vector<Circle> output;

    output = filter_circles(input, 0.0);
    REQUIRE(output.size() == 3);

    output = filter_circles(input, -1.0);
    REQUIRE(output.size() == 3);
  }
}