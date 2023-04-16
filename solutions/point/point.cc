#include "point.h"

Point translate_x(Point point, double offset) {
  return {point.x + offset, point.y};
}

Point translate_y(Point point, double offset) {
  return {point.x, point.y + offset};
}