#include "mode.h"

#include "higheconomy.h"
#include "inuse.h"
#include "lockeconomy.h"
#include "loweconomy.h"
#include "mediumeconomy.h"

Mode::Mode()
{
    m_modePlain.emplace(EconomyName::IN_USE, new InUse(0, true));
    m_modePlain.emplace(EconomyName::LOW, new LowEconomy(2 * 1000, true));
    m_modePlain.emplace(EconomyName::LOCK, new LockEconomy(3 * 1000, true));
    m_modePlain.emplace(EconomyName::MEDIUM, new MediumEconomy(4 * 1000, true));
    m_modePlain.emplace(EconomyName::HIGH, new HighEconomy(5 * 1000, true));

    m_currenteMode = m_modePlain[EconomyName::IN_USE].get();
    m_currenteMode->start();
}

void
Mode::setMode(EconomyState& state)
{
    qDebug() << "Mode::setMode";
    m_currenteMode = &state;
    m_currenteMode->start();
}

EconomyState*
Mode::currenteMode() const
{
    return m_currenteMode;
}

void
Mode::toggle()
{
    qDebug() << "Mode::toggle()";
    m_currenteMode->toggle(this);
}

EconomyState&
Mode::factory(EconomyName name)
{
    return *m_modePlain[name];
}
