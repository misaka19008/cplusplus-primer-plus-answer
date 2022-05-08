#include<iostream>
using namespace std;
const int Lbs_per_stn=14;
int main(){
    int lbs;

    cout<<"Enter your weight in pounds: ";
    cin>>lbs;
    cout<<lbs<<" pounds are "<<lbs/Lbs_per_stn<<" stone, "<<lbs%Lbs_per_stn<<" pounds."<<endl;

    system("pause");
    return 0;
}