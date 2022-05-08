#include<iostream>
#include "header_files/namesp.h"

namespace pers
{
    using std::cin;
    using std::cout;
    using std::getline;
    void getPerson(Person & rp){
        cout<<"Enter last name: ";
        cin>>rp.lname;
        cout<<"Enter first name: ";
        cin>>rp.fname;
    }
    void showPerson(const Person & rp){
        cout<<rp.lname<<" "<<rp.fname;
    }
} // namespace pers

namespace debts
{
    void getDebt(Debt & rd){
        getPerson(rd.name);
        std::cout<<"Enter debt: ";
        std::cin>>rd.amount;
    }
    void showDebt(const Debt & rd){
        showPerson(rd.name);
        std::cout<<": $"<<rd.amount<<std::endl;
    }
    double sumDebts(const Debt ar[],int n){
        double total=0;
        for (int i = 0; i < n; i++) total+=ar[i].amount;
        return total;
    }
} // namespace debts