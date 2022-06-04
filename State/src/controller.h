#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "mode.h"
#include <QObject>
#include <QTimer>

class Controller : public QObject
{
    Q_OBJECT
  public:
    explicit Controller(QObject* parent = nullptr);

  private slots:
    void onTimeOut();

  private:
    QTimer m_timer;
    Mode m_mode;
};

#endif // CONTROLLER_H
