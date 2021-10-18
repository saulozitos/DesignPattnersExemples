#pragma once

#include "ianimal.h"

class Cat : public Animal {
public:
  Cat();
  ~Cat();

  std::unique_ptr<Animal> create() override;
  std::unique_ptr<Animal> clone() override;
};
