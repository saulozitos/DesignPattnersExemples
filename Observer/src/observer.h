#pragma once

#include "iobserver.h"
#include <string>

class Subject;
class Observer : public IObserver
{
public:
    explicit Observer(Subject &subject);
    virtual ~Observer();
    void update(const std::string &msg) override;
    void removeMeFromTheList();

private:
    std::string m_messageFromSubject;
    Subject &m_subject;
    static int staticNumber;
    int m_number;

    void printInfo();
};

