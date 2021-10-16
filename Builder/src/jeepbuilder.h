#pragma once

#include "builder.h"

class JeepBuilder : public Builder {
public:
  JeepBuilder() = default;
  ~JeepBuilder() = default;

  // Builder interface
  std::unique_ptr<CarParts::Wheel> getWheel() override;
  std::unique_ptr<CarParts::Engine> getEngine() override;
  std::unique_ptr<CarParts::Body> getBody() override;
};
