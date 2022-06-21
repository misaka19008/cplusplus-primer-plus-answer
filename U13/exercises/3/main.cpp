#include<iostream>
#include "exec3.h"
using std::cout;
using std::endl;

int main(){
    baseDMA shirt("Portabelly",8);
    lacksDMA balloon("red","Blimpo",4);
    lacksDMA balloon2(balloon);
    hasDMA map("Mercator","Buffalo Keys",5);
    hasDMA map2;
    map2=map;
    cout<<"Displaying baseDMA object:"<<endl;
    cout<<shirt<<endl;
    cout<<"Displaying lacksDMA object:"<<endl;
    cout<<balloon<<endl;
    cout<<"Displaying hasDMA object:"<<endl;
    cout<<map<<endl;
    cout<<"Result of lacksDMA copy:"<<endl;
    cout<<balloon2<<endl;
    cout<<"Result of hasDMA assignment:"<<endl;
    cout<<map2<<endl;

    system("pause");
    return 0;
}