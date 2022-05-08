#include<iostream>
#include<cstring>
using namespace std;
const int Size=15;
int main(){
    char name1[Size];
    char name2[Size]="C++owboy";

    cout<<"Howdy! I'm "<<name2<<"! What's your name?"<<endl;
    cout<<"Enter your name: ";
    cin>>name1;
    cout<<"Well, "<<name1<<", your name has "<<strlen(name1)<<" letters and is stored in an array of "
    <<sizeof(name1)<<" bytes."<<endl;
    cout<<"Your initial is "<<name1[0]<<"."<<endl;
    name2[3]='\0';
    cout<<"Here are the first 3 character of my name: "<<name2<<endl;

    system("pause");
    return 0;
}