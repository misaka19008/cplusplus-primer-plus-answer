#include<iostream>
using namespace std;
void showMenu();
void report();
void comfort();
int main(){
    int choice;

    showMenu();
    cout<<"Enter your choice: ";
    cin>>choice;
    while (choice != 5)
    {
        switch (choice)
        {
        case 1 :
            cout<<"\a"<<endl;
            break;
        case 2 :
            report();
            break;
        case 3 :
            cout<<endl<<"The boss was in all day."<<endl<<endl;
            break;
        case 4 :
            comfort();
            break;
        default:
            cout<<endl<<"That's not a choice."<<endl<<endl;
        }
        showMenu();
        cout<<"Enter your choice: ";
        cin>>choice;
    }
    cout<<"Bye!"<<endl;

    system("pause");
    return 0;
}

void showMenu(){
    cout<<"Please enter 1, 2, 3, 4, or 5:\n"
          "1) alarm            2)report\n"
          "3) alibi            4)comfort\n"
          "5) quit\n";
}

void report(){
    cout<<endl<<"It's been an excellent week for business.\nSales are up 120%. Expenses are down 35%."<<endl<<endl;
}

void comfort(){
    cout<<endl<<"Your employees think you're the finest CEO in the industry.\nThe board of directors think you're the finest CEO in the industry."<<endl<<endl;
}