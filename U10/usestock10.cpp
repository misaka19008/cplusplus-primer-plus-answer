#include<iostream>
#include "header_files/stock10.h"
using std::cout;
using std::endl;

int main(){
    cout<<"Using constructors to create new objects."<<endl;
    Stock stock1("Bilibili",12,20.0);
    stock1.show();
    Stock stock2=Stock("miHoYo",2,2.0);
    stock2.show();

    cout<<"Assigning stock1 to stock2:"<<endl;
    stock2=stock1;
    cout<<"Listing stock1 and stock2:"<<endl;
    stock1.show();
    stock2.show();

    cout<<"Using a constructors to reset an objects."<<endl;
    stock1=Stock("AcFun",10,50.0);
    cout<<"Revised stock1:"<<endl;
    stock1.show();
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}