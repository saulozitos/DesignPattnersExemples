#include "observer.h"
#include <iostream>
#include "subject.h"

int Observer::staticNumber = 0;

Observer::Observer(Subject &subject) :
    m_subject(subject),
    m_number(++staticNumber)
{
    m_subject.attach(this);
    std::cout << "Hi, I'm the Observer \"" << m_number << "\".\n";
}

Observer::~Observer()
{
    std::cout << "Goodbye, I was the Observer \"" << m_number << "\".\n";
}

void Observer::update(const std::string &msg)
{
    m_messageFromSubject = msg;
    printInfo();
}

void Observer::removeMeFromTheList()
{
    m_subject.detach(this);
    std::cout << "Observer \"" << m_number << "\" removed from the list.\n";
}

void Observer::printInfo()
{
    std::cout << "Observer \"" << m_number << "\": a new message is available --> " << m_messageFromSubject << "\n";
}
