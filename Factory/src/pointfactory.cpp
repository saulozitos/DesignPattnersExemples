#include "pointfactory.h"

#include "point2d.h"
#include "point3d.h"

PointFactory::PointFactory() {
  m_factories[PointType::Cartesian] = [] {
    return std::make_unique<Point2D>();
  };
  m_factories[PointType::Polar] = [] { return std::make_unique<Point3D>(); };
  std::cout << "PointFactory constructor" << '\n';
}

std::unique_ptr<IPoint> PointFactory::create(PointType type) {
  return m_factories[type]();
}
