#include<iostream>
#include "exec4.h"
using namespace std;
int main(){
    double num_arr[QUARTERS]={100,256,300,400};
    Sales data1(num_arr,QUARTERS);
    Sales data2;

    data1.showSales();
    data2.showSales();
    cout<<endl;

    system("pause");
    return 0;
}