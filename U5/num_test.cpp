#include<iostream>
using namespace std;
int main(){
    int i;
    int limit;

    cout<<"Enter the start countdown value: ";
    cin>>limit;
    for (i = limit; i ; i--)
    {
        cout<<"i = "<<i<<endl;
    }
    cout<<"Done now that i = "<<i<<endl;

    system("pause");
    return 0;
}