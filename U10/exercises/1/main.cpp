#include<iostream>
#include<string>
#include "exec1.h"
using namespace std;
int main(){
    int choice;
    string username;
    long long accid;
    double money=0.0;

    cout<<"----------Online Bank----------"<<endl;
    cout<<"Create User:"<<endl;
    cout<<"Enter your name: ";
    while (!getline(cin,username))
    {
        cin.clear();
        while (cin.get() != '\n') continue;
        cout<<"Input error, please enter your name again: ";
    }
    cout<<"Set your Account ID: ";
    while (!(cin>>accid))
    {
        cin.clear();
        while (cin.get() != '\n') continue;
        cout<<"Input error, please enter your Account ID again: ";
    }
    Bank_acc_info bank_acc(username,accid,money);
    cout<<"Account created successfully!"<<endl;

    while (true){
        cout<<endl<<"----------Online Bank----------"<<endl
        <<"1. Store\n2. Take out\n3. Show your account\n4. Quit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter deposit amount: ";
            cin>>money;
            bank_acc.acc_in(money);
            break;
        case 2:
            cout<<"Enter withdrawal amount: ";
            cin>>money;
            bank_acc.acc_out(money);
            break;
        case 3:
            bank_acc.acc_show();
            break;
        case 4:
            cout<<"Bye!"<<endl;
            system("pause");
            exit(EXIT_SUCCESS);
        default:
            cout<<"That wasn't a choice!"<<endl;
            break;
        }
    }

    system("pause");
    return 0;
}