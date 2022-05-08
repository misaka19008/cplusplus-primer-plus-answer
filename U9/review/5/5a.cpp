#include<iostream>
#include "review5.h"
using namespace std;

int main(){
    int num_x;
    int num_y;
    int iResult;
    double dResult;

    cout<<"Enter an number: ";
    cin>>num_x;
    cout<<"Enter another number: ";
    cin>>num_y;
    iResult=returnInt::average(num_x,num_y);
    dResult=returnDouble::average(num_x,num_y);
    cout<<"Int-average: "<<iResult<<endl;
    cout<<"Double-average: "<<dResult<<endl;

    system("pause");
    return 0;
}