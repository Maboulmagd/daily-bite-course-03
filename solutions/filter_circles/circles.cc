#include "circles.h"
#include <numbers>

std::vector<Circle> filter_circles(std::vector<Circle> circles,
                                   double threshold) {
  std::vector<Circle> result;
  // Iterate over all circles in the input
  for (Circle c : circles)
    // Calculate area and compare
    if (c.radius * c.radius * std::numbers::pi > threshold)
      // Add to result
      result.push_back(c);
  return result;
}