#include<iostream>
#include "header_files/mytime2.h"
using std::cout;

int main(){
    Time weeding(4,35);
    Time waxing(2,47);
    Time total;
    Time diff;
    Time adjusted;

    cout<<"weeding time = ";
    weeding.Show();
    cout<<"waxing time = ";
    waxing.Show();
    cout<<"total working time = ";
    total=weeding+waxing;
    total.Show();
    diff=weeding-waxing;
    cout<<"weeding time - waxing time = ";
    diff.Show();
    adjusted=total*1.5;
    cout<<"adjusted work time = ";
    adjusted.Show();

    system("pause");
    return 0;
}