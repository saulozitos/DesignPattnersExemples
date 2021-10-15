#pragma once

#include <map>
#include <functional>
#include <memory>

#include "ipoint.h"

class PointFactory
{
public:
    PointFactory();
    std::unique_ptr<IPoint> create(PointType type);
private:
    std::map<PointType, std::function<std::unique_ptr<IPoint>() >>m_factories;
};

