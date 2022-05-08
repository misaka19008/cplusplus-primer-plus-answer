#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;

    cout<<"Enter a integer: ";
    cin>>a;
    cout<<"Enter another integer: ";
    cin>>b;
    c=a>b?a:b;
    cout<<"The larger of "<<a<<" and "<<b<<" is "<<c<<"."<<endl;

    system("pause");
    return 0;
}