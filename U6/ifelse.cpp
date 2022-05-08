#include<iostream>
using namespace std;
int main(){
    char ch;

    cout<<"Type, and I shall repeat:"<<endl;
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == '\n')
        {
            cout<<ch;
        }
        else
        {
            cout<<++ch;
        }
        cin.get(ch);
    }
    cout<<endl<<"Please excuse the slight confusion."<<endl;

    system("pause");
    return 0;
}