#include<iostream>
#include "header_files/strngbad.h"
using std::cout;
using std::endl;
void callme1(strngBad &);
void callme2(strngBad);

int main(){
    {
        cout<<"Starting an inner block."<<endl;
        strngBad headline1("Celery Stalks at Midnight");
        strngBad headline2("Lettuce Prey");
        strngBad sports("Spinach Leaves Bowl for Dollars");
        cout<<"headline1: "<<headline1<<endl;
        cout<<"headline2: "<<headline2<<endl;
        cout<<"sports: "<<sports<<endl;
        callme1(headline1);
        cout<<"headline1: "<<headline1<<endl;
        callme2(headline2);
        cout<<"headline2: "<<headline2<<endl;
        cout<<"Initialize one object to another:"<<endl;
        strngBad sailor=sports;
        cout<<"sailor: "<<sailor<<endl;
        cout<<"Assign one object to another:"<<endl;
        strngBad knot;
        knot=headline1;
        cout<<"knot: "<<knot<<endl;
        cout<<"Exiting the block."<<endl;
    }
    cout<<"End of main()."<<endl;

    system("pause");
    return 0;
}

void callme1(strngBad & rsb){
    cout<<"String passed by reference:"<<endl;
    cout<<" \""<<rsb<<"\""<<endl;
}

void callme2(strngBad sb){
    cout<<"String passed by value:"<<endl;
    cout<<" \""<<sb<<"\""<<endl;
}