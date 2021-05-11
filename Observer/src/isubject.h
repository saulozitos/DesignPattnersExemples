#pragma once

class IObserver;

class ISubject
{
    ISubject(const ISubject&) = delete; // copy constructor
    ISubject& operator=(const ISubject&) = delete; // copy assignment
    ISubject(const ISubject&&) = delete; // move constructor
    ISubject& operator=(ISubject&&) = delete; // move assignment

public:
    ISubject() = default;
    virtual ~ISubject(){};
    virtual void attach(IObserver *observer) = 0;
    virtual void detach(IObserver *observer) = 0;
    virtual void notify() = 0;
};
