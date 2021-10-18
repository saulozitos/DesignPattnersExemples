#include "manager.h"
#include <iostream>
Manager::Manager() : m_builder(nullptr) {}

void Manager::setBuilder(std::unique_ptr<Builder> newBuilder) {
  m_builder = std::move(newBuilder);
}

std::unique_ptr<Car> Manager::getCar() {
  auto car = std::make_unique<Car>();
  car->setBody(m_builder->getBody());
  car->setEngine(m_builder->getEngine());

  auto wheels =
      std::make_unique<std::array<std::unique_ptr<CarParts::Wheel>, 4>>();

  for (int i = 0; i < 4; ++i) {
    wheels->at(i) = std::move(m_builder->getWheel());
  }

  car->setWheels(std::move(wheels));

  return car;
}
