#pragma once

#include <vector>

struct Pos {
  double x;
  double y;
};

struct Circle {
  Pos position;
  double radius;
};

/** \brief Returns circles that have an area above the threshold.
 *
 * \param circles The circles to filter.
 * \param threshold The threshold for circle area.
 */
std::vector<Circle> filter_circles(std::vector<Circle> circles,
                                   double threshold);