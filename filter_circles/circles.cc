#include "circles.h"

#include <numbers>

using namespace std;

std::vector<Circle> filter_circles(std::vector<Circle> circles,
                                   double threshold) {
  std::vector<Circle> filtered_circles;

  for (const auto &circle : circles) {
    if ((numbers::pi * circle.radius * circle.radius) > threshold) {
      filtered_circles.push_back(circle);
    }
  }

  return filtered_circles;
}