#include "pointfactory.h"

int main() {

  std::cout << "PointFactory declaration" << '\n';
  PointFactory pf;

  std::cout << "Create Cartesian" << '\n';
  auto cartesianPoint = pf.create(PointType::Cartesian);

  std::cout << "Create Polar" << '\n';
  auto polarPoint = pf.create(PointType::Polar);

  return 0;
}
