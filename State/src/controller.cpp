#include "controller.h"

Controller::Controller(QObject* parent)
  : QObject(parent)
{
    m_timer.setSingleShot(true);
    connect(&m_timer, SIGNAL(timeout()), this, SLOT(onTimeOut()));

    const auto timeout = m_mode.currenteMode()->transitionTime();
    m_timer.start(timeout);
}

void
Controller::onTimeOut()
{
    qDebug() << "Controller::onTimeOut()";
    m_mode.toggle();
    const auto timeout = m_mode.currenteMode()->transitionTime();
    m_timer.start(timeout);
}
