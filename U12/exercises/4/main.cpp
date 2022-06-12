#include<iostream>
#include<cctype>
#include "exec4.h"
using namespace std;

int main(){
    Stack st;
    char ch;
    unsigned long po;
    cout<<"Please enter A to add a purchase order,\nP to process a PO, or Q to quit: ";
    while (cin>>ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n') continue;
        if (!isalpha(ch))
        {
            cout<<'\a';
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            cout<<"Enter a PO number to add: ";
            cin>>po;
            if (st.isfull()) cout<<"Stack already full."<<endl;
            else st.push(po);
            break;
        case 'P':
        case 'p':
            if (st.isempty()) cout<<"Stack already empty."<<endl;
            else
            {
                st.pop(po);
                cout<<"PO #"<<po<<" popped."<<endl;
            }
            break;
        }
        cout<<"Please enter A to add a purchase order,\nP to process a PO, or Q to quit: ";
    }
    cout<<"Bye!"<<endl;

    system("pause");
    return 0;
}