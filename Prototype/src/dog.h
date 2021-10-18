#pragma once

#include "ianimal.h"

class Dog : public Animal {
public:
  Dog();
  ~Dog();

  std::unique_ptr<Animal> create() override;
  std::unique_ptr<Animal> clone() override;
};
