#pragma once

#include <array>
#include <memory>
#include <string>

namespace CarParts {
class Wheel {
public:
  Wheel() = default;
  ~Wheel() = default;

  int size() const;
  void setSize(int newSize);

private:
  int m_size;
};

class Engine {
public:
  Engine() = default;
  ~Engine() = default;

  int horsePower() const;
  void setHorsePower(int newHorsePower);

private:
  int m_horsePower;
};

class Body {
public:
  Body() = default;
  ~Body() = default;

  const std::string &shape() const;
  void setShape(const std::string &newShape);

private:
  std::string m_shape;
};

} // namespace CarParts

class Car {
public:
  Car();
  ~Car() = default;

  void specifications();

  void setEngine(std::unique_ptr<CarParts::Engine> newEngine);

  void setBody(std::unique_ptr<CarParts::Body> newBody);

  void
      setWheels(std::unique_ptr<std::array<std::unique_ptr<CarParts::Wheel>, 4>>
                    newWheels);

private:
  std::unique_ptr<std::array<std::unique_ptr<CarParts::Wheel>, 4>> m_wheels;
  std::unique_ptr<CarParts::Engine> m_engine;
  std::unique_ptr<CarParts::Body> m_body;
};
