#pragma once

#include "isubject.h"
#include <list>
#include <string>

class Subject : public ISubject
{
public:
    Subject();
    virtual ~Subject();
    void attach(IObserver *observer) override;
    void detach(IObserver *observer) override;
    void notify() override;
    void createMessage(const std::string &msn = "Empty");
private:
    std::list<IObserver *> m_list_observer;
    std::string m_message;
    void howManyObserver();
    void someBusinessLogic();
};

