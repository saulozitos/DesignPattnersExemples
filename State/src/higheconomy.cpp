#include "higheconomy.h"
#include "mode.h"

HighEconomy::HighEconomy(int transitionTime, const bool enable)
  : m_transationTime(transitionTime)
  , m_enable(enable)
{}

void
HighEconomy::start()
{
    qDebug() << "HighEconomy::start()" << m_enable;
    if (m_enable) {
        // executa a configuração do hardware
    }
}

void
HighEconomy::toggle(Mode* mode)
{
    qDebug() << "HighEconomy::toggle" << m_enable;
    mode->setMode(mode->factory(EconomyName::IN_USE));
}

void
HighEconomy::setEnable(const bool value)
{
    m_enable = value;
}

bool
HighEconomy::enable()
{
    return m_enable;
}

void
HighEconomy::setTransitionTime(const int value)
{
    m_transationTime = value;
}

int
HighEconomy::transitionTime()
{
    return m_enable ? m_transationTime : 0;
}
