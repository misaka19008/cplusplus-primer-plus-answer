#include<iostream>
#include "exec4.h"
using namespace std;
int main(){
    SALES::Sales data;

    SALES::setSales(data);
    SALES::showSales(data);
    cout<<endl;

    system("pause");
    return 0;
}