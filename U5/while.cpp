#include<iostream>
using namespace std;
const int ARSIZE=20;
int main(){
    int i=0;
    char name[ARSIZE];

    cout<<"Your first name, please: ";
    cin>>name;
    cout<<"Here is your name, split and converted:"<<endl;
    while (name[i] != '\0')
    {
        cout<<name[i]<<": "<<int(name[i])<<endl;
        i++;
    }
    
    system("pause");
    return 0;
}