#pragma once
#include "ipoint.h"

class Point3D : public IPoint
{
public:
    Point3D();
    virtual ~Point3D();

private:
    friend class PointFactory;
    unsigned int totalOfPoints() override;
    void addValue(Axis axis, float value) override;
    void removeValue(Axis axis, float value) override;
};

