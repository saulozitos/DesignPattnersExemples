#pragma once
#include "ipoint.h"

class Point2D : public IPoint
{
public:
    Point2D();
    virtual ~Point2D();
private:
    friend class PointFactory;
    unsigned int totalOfPoints() override;
    void addValue(Axis axis, float value) override;
    void removeValue(Axis axis, float value) override;
};
