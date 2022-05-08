#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string name;
    string dessert;

    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your favorite dessert: ";
    getline(cin,dessert);
    cout<<"I have some delicious "<<dessert<<" for you, "<<name<<"."<<endl;

    system("pause");
    return 0;
}