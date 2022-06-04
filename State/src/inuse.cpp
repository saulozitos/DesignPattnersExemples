#include "inuse.h"
#include "mode.h"

InUse::InUse(const int transitionTime, const bool enable)
  : m_transationTime(transitionTime)
  , m_enable(enable)
{}

void
InUse::start()
{
    qDebug() << "InUse::start()" << m_enable;
    if (m_enable) {
        // executa a configuração do hardware
    }
}

void
InUse::toggle(Mode* mode)
{
    qDebug() << "InUse::toggle";
    mode->setMode(mode->factory(EconomyName::LOW));
}

void
InUse::setEnable(const bool value)
{
    m_enable = value;
}

bool
InUse::enable()
{
    return m_enable;
}

void
InUse::setTransitionTime(const int value)
{
    m_transationTime = value;
}

int
InUse::transitionTime()
{
    return m_enable ? m_transationTime : 0;
}
