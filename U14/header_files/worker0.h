#ifndef WORKER0_H_
#define WORKER0_H_
#include<string>

class Worker
{
private:
    std::string fullname;
    long long id;
public:
    Worker() : fullname("<null>"),id(0L) {}
    Worker(const std::string & s,long long wID) : fullname(s),id(wID) {}
    virtual ~Worker() = 0;
    virtual void set();
    virtual void show() const;
};

class Waiter : public Worker
{
private:
    int panache;
public:
    Waiter() : Worker(),panache(0) {}
    Waiter(const std::string & s,long long workerID,int p=0) : Worker(s,workerID),panache(p) {}
    Waiter(const Worker & wk,int p=0) : Worker(wk),panache(0) {}
    void set();
    void show() const;
};

class Singer : public Worker
{
protected:
    enum {other,alto,contralto,soprano,bass,baritone,tenor};
    enum {Vtypes=7};
private:
    static char * pv[Vtypes];
    int voice;
public:
    Singer() : Worker(),voice(other) {}
    Singer(const std::string & s,long long workerID,int v=other) : Worker(s,workerID),voice(v) {}
    Singer(const Worker & wk,int v=other) : Worker(wk),voice(v) {}
    void set();
    void show() const;
};

#endif