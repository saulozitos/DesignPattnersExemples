#ifndef MODE_H
#define MODE_H

#include <map>

#include "economystate.h"
#include <memory>

enum class EconomyName
{
    IN_USE,
    LOW,
    LOCK,
    MEDIUM,
    HIGH
};

class Mode
{
  public:
    Mode();
    void setMode(EconomyState& state);
    EconomyState* currenteMode() const;
    void toggle();
    EconomyState& factory(EconomyName name);

  private:
    EconomyState* m_currenteMode;
    std::map<EconomyName, std::unique_ptr<EconomyState>> m_modePlain;
};

#endif // MODE_H
