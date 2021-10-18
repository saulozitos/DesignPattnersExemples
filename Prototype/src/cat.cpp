#include "cat.h"
#include <iostream>

Cat::Cat() { std::cout << "CONSTRUCTOR Cat - this = " << this << '\n'; }

Cat::~Cat() { std::cout << "DESTRUCTOR Cat - this = " << this << '\n'; }

std::unique_ptr<Animal> Cat::create() { return std::make_unique<Cat>(); }

std::unique_ptr<Animal> Cat::clone() { return std::make_unique<Cat>(*this); }

void Cat::whoAmI() { std::cout << "I'm the Cat! this = " << this << '\n'; }
