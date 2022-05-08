#include<iostream>
using namespace std;
int main(){
    char ch;
    int ct1=0;
    int ct2=0;

    while ((ch=cin.get()) != '$')
    {
        cout<<ch;
        ct1++;
        if (ch = '$')
        {
            ct2++;
        }
        cout<<ch;
    }
    cout<<"ct1 = "<<ct1<<", ct2 = "<<ct2<<endl;

    system("pause");
    return 0;
}