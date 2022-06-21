#ifndef BRASS_H_
#define BRASS_H_
#include<string>

class Brass
{
private:
    std::string fullname;       // 全名
    long long accountID;             // 账户ID
    double balance;             // 余额
public:
    Brass(const std::string & s="Nullbody",long long accID=100000000,double bal=0.0);
    void deposit(double amt);
    virtual void withdraw(double amt);
    double getBalance() const { return balance; }
    virtual void viewAccount() const;
    virtual ~Brass() {}
};

class BrassPlus : public Brass
{
private:
    double maxLoan;             // 最大透支总额
    double rate;                // 透支贷款利率
    double owesBank;            // 当前透支总额
public:
    BrassPlus(const std::string & s="Nullbody",long long accID=100000000,double bal=0.0,double ml=500,double r=0.11125);
    BrassPlus(const Brass & ba,double ml=500,double r=0.11125);
    virtual void viewAccount() const;
    virtual void withdraw(double amt);
    void resetMax(double m) { maxLoan=m; }
    void resetRate(double r) { rate=r; }
    void resetOwes() { owesBank=0; }
};

#endif