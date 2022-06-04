#include "lockeconomy.h"
#include "mode.h"

LockEconomy::LockEconomy(const int transitionTime, const bool enable)
  : m_transationTime(transitionTime)
  , m_enable(enable)
{}

void
LockEconomy::start()
{
    qDebug() << "LockEconomy::start()" << m_enable;
    if (m_enable) {
        // executa a configuração do hardware
    }
}

void
LockEconomy::toggle(Mode* mode)
{
    qDebug() << "LockEconomy::toggle" << m_enable;
    mode->setMode(mode->factory(EconomyName::MEDIUM));
}

void
LockEconomy::setEnable(const bool value)
{
    m_enable = value;
}

bool
LockEconomy::enable()
{
    return m_enable;
}

void
LockEconomy::setTransitionTime(const int value)
{
    m_transationTime = value;
}

int
LockEconomy::transitionTime()
{
    return m_enable ? m_transationTime : 0;
}
