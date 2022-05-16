#include<iostream>
#include "exec8.h"
using namespace std;
int main(){
    List data;
    Item item=0;

    cout<<"Enter a unsigned integer: ";
    while (cin>>item && item != 0)
    {
        cin.get();
        data.push(item);
        cout<<"Enter a unsigned integer: ";
    }
    cout<<"Now start to visit:"<<endl;
    data.visit(showItem);
    cout<<endl;

    system("pause");
    return 0;
}