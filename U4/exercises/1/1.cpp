#include<iostream>
using namespace std;
int main(){
    char firstName[30];
    char lastName[15];
    int age;
    char grade;

    cout<<"What's your first name: ";
    cin.getline(firstName,30);
    cout<<"What's your last name: ";
    cin.getline(lastName,15);
    cout<<"What letter grade do you deserve: ";
    cin>>grade;
    cin.get();
    cout<<"What's your age: ";
    cin>>age;

    cout<<"Name: "<<firstName<<" "<<lastName<<endl;
    cout<<"Grade: "<<char(grade+1)<<endl;
    cout<<"Age: "<<age<<endl;

    system("pause");
    return 0;
}