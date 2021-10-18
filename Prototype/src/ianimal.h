#pragma once

#include <memory>

class Animal {
public:
  Animal() = default;
  virtual ~Animal() = default;
  virtual std::unique_ptr<Animal> create() = 0;
  virtual std::unique_ptr<Animal> clone() = 0;
  virtual void whoAmI() = 0;
};
