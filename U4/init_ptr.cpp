#include<iostream>
using namespace std;
int main(){
    int higgens=5;
    int * pt=&higgens;

    cout<<"Value of \"higgens\" = "<<higgens<<", address of \"higgens\" = "<<&higgens<<endl;
    cout<<"Value of *pt = "<<*pt<<", value of pt = "<<pt<<endl;

    system("pause");
    return 0;
}