#include<iostream>
#include "exec6.h"
using namespace std;
int main(){
    Move data1(66.0,99.0);
    Move data2(22.0,33.0);
    Move data3;

    cout<<"Default:"<<endl;
    cout<<"data1: ";
    data1.showMove();
    cout<<"data2: ";
    data2.showMove();
    
    cout<<endl<<"Processing......"<<endl;
    data3=data2.add(data1);
    cout<<endl<<"After:"<<endl;
    cout<<"data1: ";
    data1.showMove();
    cout<<"data2: ";
    data2.showMove();
    cout<<"data3: ";
    data3.showMove();

    cout<<"Reseting......"<<endl;
    data1.reset();
    data2.reset();
    data3.reset();
    cout<<endl<<"After reset:"<<endl;
    cout<<"data1: ";
    data1.showMove();
    cout<<"data2: ";
    data2.showMove();
    cout<<"data3: ";
    data3.showMove();

    system("pause");
    return 0;
}