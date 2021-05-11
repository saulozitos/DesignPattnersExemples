#pragma once

#include <string>

class IObserver
{
    IObserver(const IObserver&) = delete; // copy constructor
    IObserver& operator=(const IObserver&) = delete; // copy assignment
    IObserver(const IObserver&&) = delete; // move constructor
    IObserver& operator=(IObserver&&) = delete; // move assignment

public:
    IObserver() = default;
    virtual ~IObserver(){};
    virtual void update(const std::string &msn) = 0;
};
