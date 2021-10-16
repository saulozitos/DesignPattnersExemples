#pragma once

#include "car.h"

class Builder {
public:
  virtual std::unique_ptr<CarParts::Wheel> getWheel() = 0;
  virtual std::unique_ptr<CarParts::Engine> getEngine() = 0;
  virtual std::unique_ptr<CarParts::Body> getBody() = 0;
};
