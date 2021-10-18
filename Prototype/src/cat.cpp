#include "cat.h"
#include <iostream>

Cat::Cat() { std::cout << "CONSTRUCTOR Cat" << '\n'; }

Cat::~Cat() { std::cout << "DESTRUCTOR Cat" << '\n'; }

std::unique_ptr<Animal> Cat::create() { return std::make_unique<Cat>(); }

std::unique_ptr<Animal> Cat::clone() { return std::make_unique<Cat>(*this); }
