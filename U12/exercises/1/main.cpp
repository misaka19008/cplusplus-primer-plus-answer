#include<iostream>
#include "exec1.h"
using std::cout;
using std::endl;

int main(){
    Cow cow1;
    Cow cow2("Keqing","Shopping",50);
    Cow cow3=Cow("Hutao","Writing poetry",55);
    Cow cow4(cow2);

    cout<<"Info 1:"<<endl;
    cow1.ShowCow();
    cout<<endl<<"Info 2:"<<endl;
    cow2.ShowCow();
    cout<<endl<<"info 3:"<<endl;
    cow3.ShowCow();
    cout<<endl<<"Info 4:"<<endl;
    cow4.ShowCow();
    cout<<endl;

    cow1.~Cow();
    cow2.~Cow();
    cow3.~Cow();
    cow4.~Cow();
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}