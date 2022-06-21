#include<iostream>
#include "header_files/acctabc.h"
using std::cout;
using std::ios_base;
using std::endl;
using std::string;

AcctABC::AcctABC(const string & s,long long accID,double bal){
    fullname=s;
    accountID=accID;
    balance=bal;
}

void AcctABC::deposit(double amt){
    if (amt < 0) cout<<"Negative deposit not allowed; deposit is cancelled."<<endl;
    else balance+=amt;
}

void AcctABC::withdraw(double amt){
    balance-=amt;
}

AcctABC::Formatting AcctABC::setFormat() const {
    Formatting f;
    f.flag=cout.setf(ios_base::fixed,ios_base::floatfield);
    f.pr=cout.precision(2);
    return f;
}

void AcctABC::restore(Formatting & f) const {
    cout.setf(f.flag,ios_base::floatfield);
    cout.precision(f.pr);
}

void Brass::withdraw(double amt){
    if (amt < 0) cout<<"Withdrawal amount must be positive; withdrawal calcelled."<<endl;
    else if (amt <= getBalance()) AcctABC::withdraw(amt);
    else cout<<"Withdrawal amount of $"<<amt<<" exceeds your balance.\nWithdrawal calcelled."<<endl;
}

void Brass::viewAccount() const {
    Formatting f=setFormat();
    cout<<"Brass Client: "<<getFullName()<<endl;
    cout<<"Account Number: "<<getAcctID()<<endl;
    cout<<"Balance: $"<<getBalance()<<endl;
    restore(f);
}

BrassPlus::BrassPlus(const string & s,long long accID,double bal,double ml,double r) : AcctABC(s,accID,bal) {
    maxLoan=ml;
    owesBank=0.0;
    rate=r;
}

BrassPlus::BrassPlus(const Brass & ba,double ml,double r) : AcctABC(ba) {
    maxLoan=ml;
    owesBank=0.0;
    rate=r;
}

void BrassPlus::withdraw(double amt){
    Formatting f=setFormat();
    double bal=getBalance();
    if (amt <= bal) AcctABC::withdraw(amt);
    else if (amt <= bal+maxLoan-owesBank)
    {
        double advance=amt-bal;
        owesBank+=advance*(1.0+rate);
        cout<<"Bank advance: $"<<advance<<endl;
        cout<<"Finance charge: $"<<advance*rate<<endl;
        deposit(advance);
        AcctABC::withdraw(amt);
    }
    else cout<<"Credit limit exceeded. Transaction cancelled."<<endl;
    restore(f);
}

void BrassPlus::viewAccount() const {
    Formatting f=setFormat();
    cout<<"BrassPlus Client: "<<getFullName()<<endl;
    cout<<"Account Number: "<<getAcctID()<<endl;
    cout<<"Balance: $"<<getBalance()<<endl;
    cout<<"Maximum loan: $"<<maxLoan<<endl;
    cout<<"Owed to bank: $"<<owesBank<<endl;
    cout.precision(3);
    cout<<"Loan Rate: "<<100*rate<<"%"<<endl;
    restore(f);
}