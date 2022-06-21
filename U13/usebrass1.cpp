#include<iostream>
#include "header_files/brass.h"
using std::cout;
using std::endl;

int main(){
    Brass Piggy("Zhao Lingyue",236547810,1902589.53);
    BrassPlus Hoggy("Zhou Xuanqin",152603287,1870000.23);

    Piggy.viewAccount();
    cout<<endl;
    Hoggy.viewAccount();
    cout<<endl;
    cout<<"Depositing $10000 into the Hogg Account:"<<endl;
    Hoggy.deposit(10000);
    cout<<"New balance: $"<<Hoggy.getBalance()<<endl;
    cout<<"Withdrawing $192000 from the Pigg Account:"<<endl;
    Piggy.withdraw(192000);
    cout<<"Pigg account:"<<endl;
    Piggy.viewAccount();
    cout<<"Depositing $2000000 into the Hogg Account:"<<endl;
    Hoggy.deposit(2000000);
    Hoggy.viewAccount();

    system("pause");
    return 0;
}