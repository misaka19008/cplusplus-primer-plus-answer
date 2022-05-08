#include<iostream>
using namespace std;
const int Arsize=60;
int main(){
    char name[Arsize];
    char dessert[Arsize];

    cout<<"Enter your name: ";
    cin.get(name,Arsize).get();
    cout<<"Enter your favorite dessert: ";
    cin.get(dessert,Arsize).get();
    cout<<"I have some delicious "<<dessert<<" for you, "<<name<<"."<<endl;

    system("pause");
    return 0;
}