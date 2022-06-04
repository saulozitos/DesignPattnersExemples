#ifndef MEDIUMECONOMY_H
#define MEDIUMECONOMY_H

#include "economystate.h"

class MediumEconomy : public EconomyState
{
  public:
    MediumEconomy(const int transitionTime, const bool enable);

    // ModeState interface
  public:
    void start() override;
    void toggle(Mode* mode) override;
    void setEnable(const bool value) override;
    bool enable() override;
    void setTransitionTime(const int value) override;
    int transitionTime() override;

  private:
    int m_transationTime;
    bool m_enable;
};

#endif // MEDIUMECONOMY_H
