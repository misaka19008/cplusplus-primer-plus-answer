#ifndef WORKERMI_H_
#define WORKERMI_H_
#include<string>

class Worker
{
private:
    std::string fullname;
    long long id;
protected:
    virtual void showData() const;
    virtual void getData();
public:
    Worker() : fullname("<null>"),id(0L) {}
    Worker(const std::string & s,long long wID) : fullname(s),id(wID) {}
    virtual ~Worker() = 0;
    virtual void set() = 0;
    virtual void show() const = 0;
};

class Waiter : virtual public Worker
{
private:
    int panache;
protected:
    void showData() const;
    void getData();
public:
    Waiter() : Worker(),panache(0) {}
    Waiter(const std::string & s,long long workerID,int p=0) : Worker(s,workerID),panache(p) {}
    Waiter(const Worker & wk,int p=0) : Worker(wk),panache(0) {}
    void set();
    void show() const;
};

class Singer : virtual public Worker
{
protected:
    enum {other,alto,contralto,soprano,bass,baritone,tenor};
    enum {Vtypes=7};
    void showData() const;
    void getData();
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

class SingingWaiter : public Singer,public Waiter
{
protected:
    void showData() const;
    void getData();
public:
    SingingWaiter() {}
    SingingWaiter(const std::string & s,long long n,int p=0,int v=other)
        : Worker(s,n),Waiter(s,n,p),Singer(s,n,v) {}
    SingingWaiter(const Worker & wk,int p=0,int v=other)
        : Worker(wk),Waiter(wk,p),Singer(wk,v) {}
    SingingWaiter(const Waiter & wt,int v=other)
        : Worker(wt),Waiter(wt),Singer(wt,v) {}
    SingingWaiter(const Singer & sg,int p=0)
        : Worker(sg),Waiter(sg,p),Singer(sg) {}
    void set();
    void show() const;
};

#endif