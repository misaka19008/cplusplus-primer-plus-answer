#include<iostream>
#include<cstring>
#include "header_files/workermi.h"
using std::cin;
using std::cout;
using std::endl;
using std::strchr;
const int SIZE=5;

int main(){
    int i;
    int ct;
    Worker * lolas[SIZE];

    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout<<"Enter the employee category:\n"<<"w: waiter  s: singer\nt:singing waiter  q:quit"<<endl;
        cin>>choice;
        while (strchr("wstq",choice) == NULL)
        {
            cout<<"Please enter a \"w\", \"s\", \"t\", or \"q\": ";
            cin>>choice;
        }
        if (choice == 'q') break;
        switch (choice)
        {
        case 'w':
            lolas[ct]=new Waiter;
            break;
        case 's':
            lolas[ct]=new Singer;
            break;
        case 't':
            lolas[ct]=new SingingWaiter;
            break;
        }
        cin.get();
        lolas[ct]->set();
    }
    
    cout<<endl<<"Here's your staff:"<<endl;
    for (i = 0; i < ct; i++)
    {
        cout<<endl;
        lolas[i]->show();
    }
    for (i = 0; i < ct; i++) delete lolas[i];
    cout<<"Bye!"<<endl;

    system("pause");
    return 0;
}