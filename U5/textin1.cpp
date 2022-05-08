#include<iostream>
using namespace std;
int main(){
    char ch;
    int count=0;

    cout<<"Enter characters, \"#\" to quit: ";
    cin>>ch;
    while (ch != '#')
    {
        cout<<ch;
        ++count;
        cin>>ch;
    }
    cout<<endl<<count<<" characters read."<<endl;

    system("pause");
    return 0;
}