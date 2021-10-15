#pragma once
#include <iostream>
#include <string>

enum class PointType { Cartesian, Polar };
enum class Axis { X, Y, Z};

class IPoint
{
    IPoint(const IPoint&) = delete; // copy constructor
    IPoint& operator=(const IPoint&) = delete; // copy assignment
    IPoint(const IPoint&&) = delete; // move constructor
    IPoint& operator=(IPoint&&) = delete; // move assignment

public:
    IPoint() = default;
    virtual ~IPoint(){ std::cout << "Destructor IPoint!" << '\n'; }
    virtual unsigned int totalOfPoints() = 0;
    virtual void addValue(Axis axis, float value) = 0;
    virtual void removeValue(Axis axis, float value) = 0;

    std::string getAxisName(Axis axis){
        switch (axis) {
        case Axis::X: return std::string("X");
        case Axis::Y: return std::string("Y");
        case Axis::Z: return std::string("Z");
        }
    }
};
