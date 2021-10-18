#include "cat.h"
#include "dog.h"
#include <iostream>

void whoAmI(std::unique_ptr<Animal> animal) {

  std::cout << "whoAmI" << '\n';

  std::cout << "Crete a newAnimal" << '\n';
  auto newAnimal = animal->create();
  newAnimal->whoAmI();

  std::cout << "Clone a animal" << '\n';
  auto cloneAnimal = animal->clone();
  cloneAnimal->whoAmI();

  std::cout << '\n';
}

int main() {

  std::cout << "Instantiating a Dog" << '\n';
  auto dog = std::make_unique<Dog>();
  whoAmI(std::move(dog));

  std::cout << '\n';

  std::cout << "Instantiating a Cat" << '\n';
  auto cat = std::make_unique<Cat>();
  whoAmI(std::move(cat));

  std::cout << "End" << '\n';

  return 0;
}
