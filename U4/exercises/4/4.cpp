#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string firstName;
    string lastName;
    string fullName;

    cout<<"Enter your last name: ";
    getline(cin,lastName);
    cout<<"Enter your first name: ";
    getline(cin,firstName);
    fullName=lastName+" "+firstName;
    cout<<"Here's the information in a single string: "<<fullName<<"."<<endl;

    system("pause");
    return 0;
}