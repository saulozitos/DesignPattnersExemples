#include "subject.h"
#include <iostream>
#include "iobserver.h"

Subject::Subject()
{
    std::cout << "Hi, I'm the Subject Constructor.\n";
}

Subject::~Subject()
{
    std::cout << "Goodbye, I was the Subject.\n";
}

void Subject::attach(IObserver *observer)
{
    m_list_observer.push_back(observer);
}

void Subject::detach(IObserver *observer)
{
    m_list_observer.remove(observer);
}

void Subject::notify()
{
    for(const auto &observer : m_list_observer)
        observer->update(m_message);
}

void Subject::createMessage(const std::string &msn)
{
    m_message = msn;
    notify();
}

void Subject::howManyObserver()
{
    std::cout << "There are " << m_list_observer.size() << " observers in the list.\n";
}

void Subject::someBusinessLogic()
{
    m_message = std::string("change message message");
    notify();
    std::cout << "I'm about to do some thing important\n";
}
