#include "loweconomy.h"
#include "mode.h"

LowEconomy::LowEconomy(const int transitionTime, const bool enable)
  : m_transationTime(transitionTime)
  , m_enable(enable)
{}

void
LowEconomy::start()
{
    qDebug() << "LowEconomy::start()" << m_enable;
    if (m_enable) {
        // executa a configuração do hardware
    }
}

void
LowEconomy::toggle(Mode* mode)
{
    qDebug() << "LowEconomy::toggle" << m_enable;
    mode->setMode(mode->factory(EconomyName::LOCK));
}

void
LowEconomy::setEnable(const bool value)
{
    m_enable = value;
}

bool
LowEconomy::enable()
{
    return m_enable;
}

void
LowEconomy::setTransitionTime(const int value)
{
    m_transationTime = value;
}

int
LowEconomy::transitionTime()
{
    return m_enable ? m_transationTime : 0;
}
