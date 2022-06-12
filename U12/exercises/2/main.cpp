#include<iostream>
#include "exec2.h"
using std::cout;
using std::cin;
using std::endl;

int main(){
    String2 s1(" and I am a C++ student.");
    String2 s2="Please enter your name: ";
    String2 s3;
    cout<<s2;
    cin>>s3;
    s2="My name is "+s3;
    cout<<s2<<"."<<endl;
    s2=s2+s1;
    s2.stringup();
    cout<<"The string\n"<<s2<<"\ncontains "<<s2.has('A')<<" 'A' characters in it."<<endl;
    s1="red";
    String2 rgb[3]={String2(s1),String2("green"),String2("blue")};
    cout<<"Enter the name of a primary color for mixing light: ";
    String2 ans;
    bool success=false;
    while (cin>>ans)
    {
        ans.stringlow();
        for (int i = 0; i < 3; i++)
        {
            if (ans == rgb[i])
            {
                cout<<"That's right!"<<endl;
                success=true;
                break;
            }
        }
        if (success) break;
        else cout<<"Try again!"<<endl;
    }
    cout<<"Bye!"<<endl;

    system("pause");
    return 0;
}