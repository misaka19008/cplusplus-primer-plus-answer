#include<iostream>
using namespace std;
int main(){
    int year;
    char address[90];

    cout<<"What year was your house built?: ";
    cin>>year;
    cin.get();
    cout<<"What's its street address?: ";
    cin.getline(address,90);
    cout<<"Year built: "<<year<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}