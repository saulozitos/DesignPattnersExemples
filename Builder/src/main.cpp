#include "car.h"
#include "jeepbuilder.h"
#include "manager.h"
#include "nissanbuilder.h"

#include <iostream>

int main() {

  std::unique_ptr<Car> car(nullptr);

  // The Manager who controls the process
  auto manager = std::make_unique<Manager>();

  // Build a Jeep
  std::cout << "Jeep" << '\n';
  auto jeep = std::make_unique<JeepBuilder>();
  manager->setBuilder(std::move(jeep));
  car = manager->getCar();
  car->specifications();

  std::cout << '\n';

  // Build a Nissan
  std::cout << "Nissan" << std::endl;
  auto nissan = std::make_unique<NissanBuilder>();
  manager->setBuilder(std::move(nissan));
  car = manager->getCar();
  car->specifications();

  return 0;
}
