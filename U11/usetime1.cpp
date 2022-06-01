#include<iostream>
#include "header_files/mytime1.h"
using std::cout;

int main(){
    Time planning;
    Time coding(2,40);
    Time fixing(5,55);
    Time morefixing(3,28);
    Time total;

    cout<<"planning time = ";
    planning.Show();
    cout<<"coding time = ";
    coding.Show();
    cout<<"fixing time = ";
    fixing.Show();
    total=coding+fixing;
    cout<<"coding + fixing = ";
    total.Show();
    cout<<"more fixing time = ";
    morefixing.Show();
    total=morefixing.operator+(total);
    cout<<"morefixing.operator+(total) = ";
    total.Show();

    system("pause");
    return 0;
}