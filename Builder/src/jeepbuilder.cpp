#include "jeepbuilder.h"

std::unique_ptr<CarParts::Wheel> JeepBuilder::getWheel() {
  auto wheel = std::make_unique<CarParts::Wheel>();
  wheel->setSize(22);
  return wheel;
}

std::unique_ptr<CarParts::Engine> JeepBuilder::getEngine() {
  auto engine = std::make_unique<CarParts::Engine>();
  engine->setHorsePower(400);
  return engine;
}

std::unique_ptr<CarParts::Body> JeepBuilder::getBody() {
  auto body = std::make_unique<CarParts::Body>();
  body->setShape("SUV");
  return body;
}
