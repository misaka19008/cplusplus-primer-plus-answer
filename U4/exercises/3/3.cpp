#include<iostream>
#include<cstring>
using namespace std;
const int SIZE=30;
int main(){
    char firstName[SIZE];
    char lastName[SIZE];
    char fullName[SIZE*2+2];

    cout<<"Enter your last name: ";
    cin.getline(lastName,SIZE);
    cout<<"Enter your first name: ";
    cin.getline(firstName,SIZE);
    strcpy(fullName,lastName);
    strcat(fullName," ");
    strcat(fullName,firstName);
    cout<<"Here's the information in a single string: "<<fullName<<"."<<endl;

    system("pause");
    return 0;
}