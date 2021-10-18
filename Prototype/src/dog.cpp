#include "dog.h"
#include <iostream>

Dog::Dog() { std::cout << "CONSTRUCTOR Dog - this = " << this << '\n'; }

Dog::~Dog() { std::cout << "DESTRUCTOR Dog - this = " << this << '\n'; }

std::unique_ptr<Animal> Dog::create() { return std::make_unique<Dog>(); }

std::unique_ptr<Animal> Dog::clone() { return std::make_unique<Dog>(*this); }

void Dog::whoAmI() { std::cout << "I'm the Dog! this = " << this << '\n'; }
