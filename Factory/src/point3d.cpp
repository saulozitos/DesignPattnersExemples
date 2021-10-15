#include "point3d.h"

Point3D::Point3D() { std::cout << "Constructor Point3D!" << '\n'; }

Point3D::~Point3D() { std::cout << "Destructor Point3D!" << '\n'; }

unsigned int Point3D::totalOfPoints() {
  std::cout << "" << '\n';
  return {};
}

void Point3D::addValue(Axis axis, float value) {
  std::cout << "add value: " << value << " in axis: " << getAxisName(axis)
            << '\n';
}

void Point3D::removeValue(Axis axis, float value) {
  std::cout << "remove value: " << value << " from axis: " << getAxisName(axis)
            << '\n';
}
