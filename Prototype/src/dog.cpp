#include "dog.h"
#include <iostream>
Dog::Dog() { std::cout << "CONSTRUCTOR Dog" << '\n'; }

Dog::~Dog() { std::cout << "DESTRUCTOR Dog" << '\n'; }

std::unique_ptr<Animal> Dog::create() { return std::make_unique<Dog>(); }

std::unique_ptr<Animal> Dog::clone() { return std::make_unique<Dog>(*this); }
