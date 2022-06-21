#include<iostream>
#include "header_files/brass.h"
using std::cout;
using std::endl;
using std::string;
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

inline format setFormat() { return cout.setf(std::ios_base::fixed,std::ios_base::floatfield); }
void restore(format f,precis p);

Brass::Brass(const string & s,long long accID,double bal){
    fullname=s;
    accountID=accID;
    balance=bal;
}

void Brass::deposit(double amt){
    if (amt < 0) cout<<"Negative deposit not allowed; deposit is cancelled."<<endl;
    else balance+=amt;
}

void Brass::withdraw(double amt){
    // 设置小数显示格式
    format initialState=setFormat();
    precis prec=cout.precision(2);

    if (amt < 0) cout<<"Withdrawal amount must be positive; Withdrawal cancelled."<<endl;
    else if (amt <= balance) balance-=amt;
    else cout<<"Withdrawal amount of $"<<amt<<" exceeds your balance.\nWithdrawal cancelled."<<endl;
    restore(initialState,prec);
}

void Brass::viewAccount() const {
    format initialState=setFormat();
    precis prec=cout.precision(2);
    cout<<"Client: "<<fullname<<endl;
    cout<<"Account Number: "<<accountID<<endl;
    cout<<"Balance: $"<<balance<<endl;
    restore(initialState,prec);
}

BrassPlus::BrassPlus(const string & s,long long accID,double bal,double ml,double r) : Brass(s,accID,bal){
    maxLoan=ml;
    owesBank=0.0;
    rate=r;
}

BrassPlus::BrassPlus(const Brass & ba,double ml,double r) : Brass(ba) {
    maxLoan=ml;
    owesBank=0.0;
    rate=r;
}

void BrassPlus::viewAccount() const {
    format initialState=setFormat();
    precis prec=cout.precision(2);

    Brass::viewAccount();
    cout<<"Maximum loan: $"<<maxLoan<<endl;
    cout<<"Owed to bank: $"<<owesBank<<endl;
    cout.precision(3);
    cout<<"Loan Rate: "<<100*rate<<"%"<<endl;
    restore(initialState,prec);
}

void BrassPlus::withdraw(double amt){
    format initialState=setFormat();
    precis prec=cout.precision(2);

    double bal=getBalance();
    if (amt <= bal) Brass::withdraw(amt);
    else if (amt <= bal+maxLoan-owesBank)
    {
        double advance=amt-bal;
        owesBank+=advance*(1.0+rate);
        cout<<"Bank advance: $"<<advance<<endl;
        cout<<"Finance charge: $"<<advance*rate<<endl;
        deposit(advance);
        Brass::withdraw(amt);
    }
    else cout<<"Credit limit exceeded. Transaction calcelled."<<endl;
    restore(initialState,prec);
}

void restore(format f,precis p){
    cout.setf(std::ios_base::floatfield);
    cout.precision(p);
}