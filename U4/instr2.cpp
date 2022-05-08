#include<iostream>
using namespace std;
const int Arsize=60;
int main(){
    char name[Arsize];
    char dessert[Arsize];

    cout<<"Enter your name: ";
    cin.getline(name,Arsize);
    cout<<"Enter your favorite dessert: ";
    cin.getline(dessert,Arsize);
    cout<<"I have some delicious "<<dessert<<" for you, "<<name<<"."<<endl;

    system("pause");
    return 0;
}