#include "point2d.h"

Point2D::Point2D() { std::cout << "Constructor Point2D!" << '\n'; }

Point2D::~Point2D() { std::cout << "Destructor Point2D!" << '\n'; }

unsigned int Point2D::totalOfPoints() {
  std::cout << "" << '\n';
  return {};
}

void Point2D::addValue(Axis axis, float value) {
  std::cout << "add value: " << value << " in axis: " << getAxisName(axis)
            << '\n';
}

void Point2D::removeValue(Axis axis, float value) {
  std::cout << "remove value: " << value << " from axis: " << getAxisName(axis)
            << '\n';
}
