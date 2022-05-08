#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    char charr[20];
    string str;

    cout<<"Length of string \"charr\" before input: "<<strlen(charr)<<endl;
    cout<<"Length of string \"str\" before input: "<<str.size()<<endl;
    cout<<"Enter a line of text: ";
    cin.getline(charr,20);
    cout<<"You entered: "<<charr<<endl;
    cout<<"Enter another line of text: ";
    getline(cin,str);
    cout<<"You entered: "<<str<<endl;
    cout<<"Length of string \"charr\" after input: "<<strlen(charr)<<endl;
    cout<<"Length of string \"str\" after input: "<<str.size()<<endl;

    system("pause");
    return 0;
}