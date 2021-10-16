#include "nissanbuilder.h"

std::unique_ptr<CarParts::Wheel> NissanBuilder::getWheel() {
  auto wheel = std::make_unique<CarParts::Wheel>();
  wheel->setSize(16);
  return wheel;
}

std::unique_ptr<CarParts::Engine> NissanBuilder::getEngine() {
  auto engine = std::make_unique<CarParts::Engine>();
  engine->setHorsePower(85);
  return engine;
}

std::unique_ptr<CarParts::Body> NissanBuilder::getBody() {
  auto body = std::make_unique<CarParts::Body>();
  body->setShape("hatchback");
  return body;
}
