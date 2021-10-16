#pragma once

#include "builder.h"

class NissanBuilder : public Builder {
public:
  NissanBuilder() = default;
  ~NissanBuilder() = default;

  // Builder interface
  std::unique_ptr<CarParts::Wheel> getWheel() override;
  std::unique_ptr<CarParts::Engine> getEngine() override;
  std::unique_ptr<CarParts::Body> getBody() override;
};
