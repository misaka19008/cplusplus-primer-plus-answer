#include<iostream>
#include "header_files/mytime0.h"
using std::cout;

int main(){
    Time planning;
    Time coding(2,40);
    Time fixing(5,55);
    Time total;

    cout<<"planning time = ";
    planning.Show();
    cout<<"coding time = ";
    coding.Show();
    cout<<"fixing time = ";
    fixing.Show();

    total=coding.Sum(fixing);
    cout<<"coding.Sum(fixing) = ";
    total.Show();

    system("pause");
    return 0;
}