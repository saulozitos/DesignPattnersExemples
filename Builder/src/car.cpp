#include "car.h"
#include <iostream>

namespace CarParts {
int Wheel::size() const { return m_size; }

void Wheel::setSize(int newSize) { m_size = newSize; }

int Engine::horsePower() const { return m_horsePower; }

void Engine::setHorsePower(int newHorsePower) { m_horsePower = newHorsePower; }

const std::string &Body::shape() const { return m_shape; }

void Body::setShape(const std::string &newShape) { m_shape = newShape; }

} // namespace CarParts

Car::Car() : m_wheels(nullptr), m_engine(nullptr), m_body(nullptr) {}

void Car::specifications() {
  std::cout << "body: " << m_body->shape() << std::endl;
  std::cout << "engine horsepower: " << m_engine->horsePower() << std::endl;
  std::cout << "tire size: " << m_wheels->at(0)->size() << "'" << std::endl;
}

void Car::setEngine(std::unique_ptr<CarParts::Engine> newEngine) {
  m_engine = std::move(newEngine);
}

void Car::setBody(std::unique_ptr<CarParts::Body> newBody) {
  m_body = std::move(newBody);
}

void Car::setWheels(
    std::unique_ptr<std::array<std::unique_ptr<CarParts::Wheel>, 4>>
        newWheels) {
  m_wheels = std::move(newWheels);
}
