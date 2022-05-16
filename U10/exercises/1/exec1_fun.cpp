#include<iostream>
#include<iomanip>
#include "exec1.h"
using namespace std;

Bank_acc_info::Bank_acc_info(){
    name="Null";
    account_id=000000000;
    total=0.0;
}

Bank_acc_info::Bank_acc_info(const std::string n,long long acc_id,double tot){
    name=n;
    account_id=acc_id;
    if (tot < 0){
        cout<<"The amount of money saved cannot be negative! Bye!"<<endl;
        system("pause");
        exit(EXIT_FAILURE);
    }
    else{
        set_total(tot);
        cout<<"Successfully!"<<endl;
    }
}

Bank_acc_info::~Bank_acc_info(){
    // Default destructor.
}

void Bank_acc_info::acc_in(double money_in){
    if (money_in < 0){
        cout<<"The amount of money saved cannot be negative!"<<endl;
        system("pause");
        exit(EXIT_FAILURE);
    }
    else{
        set_total(money_in);
        cout<<"Successfully!"<<endl;
    }
}

void Bank_acc_info::acc_out(double money_out){
    if (money_out < 0){
        cout<<"The amount of money withdrawn cannot be negative!"<<endl;
        system("pause");
        exit(EXIT_FAILURE);
    }
    else if (money_out > total){
        cout<<"The amount of money withdrawn is too large!"<<endl;
        system("pause");
        exit(EXIT_FAILURE);
    }
    else{
        set_total(-money_out);
        cout<<"Successfully!"<<endl;
    }
}

void Bank_acc_info::acc_show(){
    cout<<setiosflags(ios::fixed);
    cout<<"Name: "<<name<<endl;
    cout<<"Account ID: "<<account_id<<endl;
    cout<<"Money: "<<setprecision(3)<<total<<endl;
}