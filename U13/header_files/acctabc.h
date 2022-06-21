#ifndef ACCTABC_H_
#define ACCTABC_H_
#include<iostream>
#include<string>
using std::string;

class AcctABC
{
private:
    string fullname;       // 全名
    long long accountID;        // 账户ID
    double balance;             // 余额
protected:
    struct Formatting
    {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };
    const string & getFullName() const { return fullname; }
    long long getAcctID() const { return accountID; }
    Formatting setFormat() const;
    void restore(Formatting & f) const;
public:
    AcctABC(const string & s="Nullbody",long long accID=100000000,double bal=0.0);
    void deposit(double amt);                   // 存款方法
    virtual void withdraw(double amt) = 0;      // 取款方法，纯虚函数
    double getBalance() const { return balance; }
    virtual void viewAccount() const = 0;       // 查看账户信息，纯虚函数
    virtual ~AcctABC() {}
};

class Brass : public AcctABC
{
public:
    Brass(const string & s="Nullbody",long long accID=100000000,double bal=0.0) : AcctABC(s,accID,bal) {}
    virtual void withdraw(double amt);
    virtual void viewAccount() const;
    virtual ~Brass() {}
};

class BrassPlus : public AcctABC
{
private:
    double maxLoan;
    double rate;
    double owesBank;
public:
    BrassPlus(const string & s="Nullbody",long long accID=100000000,double bal=0.0,double ml=500,double r=0.10);
    BrassPlus(const Brass & ba,double ml=500,double r=0.10);
    virtual void withdraw(double amt);
    virtual void viewAccount() const;
    void resetMax(double m) { maxLoan=m; }
    void resetRate(double r) { rate=r; }
    void resetOwes() { owesBank=0; }
};

#endif