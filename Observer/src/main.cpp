#include "observer.h"
#include "subject.h"
#include <memory>

void exeTests()
{
    std::unique_ptr<Subject>subject = std::make_unique<Subject>();

    std::unique_ptr<Observer>observer1 = std::make_unique<Observer>(*subject);
    std::unique_ptr<Observer>observer2 = std::make_unique<Observer>(*subject);
    std::unique_ptr<Observer>observer3 = std::make_unique<Observer>(*subject);
    std::unique_ptr<Observer>observer4 = nullptr;
    std::unique_ptr<Observer>observer5 = nullptr;

    subject->createMessage("Hello World!!!!!!!");
    observer3->removeMeFromTheList();

    subject->createMessage("Fuck you hello world! XD");
    observer4 = std::make_unique<Observer>(*subject);

    observer2->removeMeFromTheList();
    observer5 = std::make_unique<Observer>(*subject);

    subject->createMessage("I create observer 4 and 5");
    observer5->removeMeFromTheList();
    observer4->removeMeFromTheList();
    observer1->removeMeFromTheList();
}

int main()
{
    exeTests();
    return 0;
}
