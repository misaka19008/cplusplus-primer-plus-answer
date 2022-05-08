#include<iostream>
using namespace std;
int main(){
    int auks;
    int bats;
    int coots;
    char ch='Z';

    auks=19.99+11.99;
    bats=(int)19.99+(int)11.99;             //old C syntax
    coots=int(19.99)+int(11.99);            //new C++ syntax

    cout<<"auks = "<<auks<<",bats = "<<bats<<", coots = "<<coots<<endl<<endl;
    cout<<"The code for "<<ch<<" is "<<int(ch)<<" ."<<endl;
    cout<<"Yes, the code is "<<static_cast<int>(ch)<<" ."<<endl;

    system("pause");
    return 0;
}