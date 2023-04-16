#pragma once

struct Point {
  double x;
  double y;
};

/** \brief Translate point on the x axis.
 *
 * \param point The point to translate.
 * \param offset The amount to translate by.
 */
Point translate_x(Point point, double offset);

/** \brief Translate point on the y axis.
 *
 * \param point The point to translate.
 * \param offset The amount to translate by.
 */
Point translate_y(Point point, double offset);