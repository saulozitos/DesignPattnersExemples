#include "mediumeconomy.h"
#include "mode.h"

MediumEconomy::MediumEconomy(const int transitionTime, const bool enable)
  : m_transationTime(transitionTime)
  , m_enable(enable)
{}

void
MediumEconomy::start()
{
    qDebug() << "MediumEconomy::start()" << m_enable;
    if (m_enable) {
        // executa a configuração do hardware
    }
}

void
MediumEconomy::toggle(Mode* mode)
{
    qDebug() << "MediumEconomy::toggle" << m_enable;
    mode->setMode(mode->factory(EconomyName::HIGH));
}

void
MediumEconomy::setEnable(const bool value)
{
    m_enable = value;
}

bool
MediumEconomy::enable()
{
    return m_enable;
}

void
MediumEconomy::setTransitionTime(const int value)
{
    m_transationTime = value;
}

int
MediumEconomy::transitionTime()
{
    return m_enable ? m_transationTime : 0;
}
