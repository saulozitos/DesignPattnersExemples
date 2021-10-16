#pragma once

#include "builder.h"

class Manager {
public:
  Manager();
  ~Manager() = default;

  void setBuilder(std::unique_ptr<Builder> newBuilder);
  std::unique_ptr<Car> getCar();

private:
  std::unique_ptr<Builder> m_builder;
};
