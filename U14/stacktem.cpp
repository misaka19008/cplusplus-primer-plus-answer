#include<iostream>
#include<string>
#include<cctype>
#include "header_files/stacktp.h"
using std::cin;
using std::cout;
using std::endl;

int main(){
    Stack<std::string> st;
    char ch;
    std::string po;
    
    cout<<"Please enter A to add a purchase order,\nP to process a PO, or Q to quit."<<endl;
    while (cin>>ch && std::toupper(ch) != 'Q')
    {
        while (cin.get() != '\n') continue;
        if (!std::isalpha(ch))
        {
            cout<<"\a";
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            cout<<"Enter a PO text to add: ";
            cin>>po;
            if (st.isfull()) cout<<"Error: Stack already full!"<<endl;
            else st.push(po);
            break;
        case 'P':
        case 'p':
            if (st.isempty()) cout<<"Error: Stack already empty!"<<endl;
            else
            {
                st.pop(po);
                cout<<"PO: \""<<po<<"\" is popped!"<<endl;
                break;
            }
        }
        cout<<"Please enter A to add a purchase order,\nP to process a PO, or Q to quit."<<endl;
    }
    cout<<"Bye!"<<endl;

    system("pause");
    return 0;
}