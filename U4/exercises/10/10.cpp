#include<iostream>
#include<array>
using namespace std;
int main(){
    array<float,3> execData;
    cout<<"Enter the first grade: ";
    cin>>execData[0];
    cout<<"Enter the second grade: ";
    cin>>execData[1];
    cout<<"Enter the third grade: ";
    cin>>execData[2];
    cout<<"You exercised three times. Average score: "<<float(execData[0]+execData[1]+execData[2])/3.0<<".\n";
    system("pause");
    return 0;
}