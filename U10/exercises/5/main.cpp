#include<iostream>
#include<cstring>
#include<cctype>
#include "exec5.h"
using namespace std;
int main(){
    Stack st;
    char choice;
    Item po;
    double pay=0.0;
    char customer_list[10][80];
    for (int i = 0; i < 10; i++) strcpy(customer_list[i],"");

    cout<<"Please enter A to add a purchase order,\nP to process a PO, or Q to quit: ";
    while (cin>>choice && toupper(choice) != 'Q')
    {
        while (cin.get() != '\n') continue;
        if (!isalpha(choice))
        {
            cout<<'\a'<<"Input error, please enter A, P or Q: ";
            continue;
        }
        if (toupper(choice) == 'A')
        {
            if(st.isFull())
            {
                cout<<"\aError: Database already FULL!"<<endl;
                cout<<"Please enter A to add a purchase order,\nP to process a PO, or Q to quit: ";
                continue;
            }
            else
            {
                int topValue;
                cout<<"Enter customer's name: ";
                cin.getline(po.fullname,80);
                cout<<"Enter customer's payment: $";
                cin>>po.payment;
                topValue=st.getTop();
                strcpy(customer_list[topValue],po.fullname);
                pay+=po.payment;
                st.push(po);
                cout<<'\a'<<"Information has been stored!"<<endl;
                cout<<"Please enter A to add a purchase order,\nP to process a PO, or Q to quit: ";
                continue;
            }
        }
        else if (toupper(choice) == 'P')
        {
            if (st.isEmpty())
            {
                cout<<"\aError: Database already EMPTY!"<<endl;
                cout<<"Please enter A to add a purchase order,\nP to process a PO, or Q to quit: ";
                continue;
            }
            else
            {
                int topValue=st.getTop();
                cout<<topValue<<endl;
                char name[80];
                strcpy(name,po.fullname);
                pay-=po.payment;
                strcpy(customer_list[topValue-1],"");
                st.pop(po);
                cout<<"\aCustomer "<<name<<"'s bill has been deleted!"<<endl;
                strcpy(name,"");
                cout<<"Please enter A to add a purchase order,\nP to process a PO, or Q to quit: ";
                continue;
            }
        }
        else
        {
            cout<<'\a'<<"Input error, please enter A, P or Q: ";
            continue;
        }
    }
    cout<<endl<<endl;
    cout<<"Today's customers and total payment:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        if (strcmp(customer_list[i],"") == 0) continue;
        else cout<<customer_list[i]<<endl;
    }
    cout<<"Total payment: $"<<pay<<endl;
    cout<<endl<<"Bye!"<<endl;

    system("pause");
    return 0;
}