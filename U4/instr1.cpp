#include<iostream>
using namespace std;
const int Arsize=15;
int main(){
    char name[Arsize];
    char dessert[Arsize];

    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your favorite dessert: ";
    cin>>dessert;
    cout<<"I have some delicious "<<dessert<<" for you, "<<name<<"."<<endl;

    system("pause");
    return 0;
}