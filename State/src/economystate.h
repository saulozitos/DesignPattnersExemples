#ifndef ECONOMYSTATE_H
#define ECONOMYSTATE_H

#include <QDebug>

class Mode;

class EconomyState
{
  public:
    virtual ~EconomyState() {}
    virtual void start() = 0;
    virtual void toggle(Mode* mode) = 0;
    virtual void setEnable(const bool value) = 0;
    virtual bool enable() = 0;
    virtual void setTransitionTime(const int value) = 0;
    virtual int transitionTime() = 0;
};

#endif // ECONOMYSTATE_H
