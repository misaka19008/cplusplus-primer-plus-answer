#include<iostream>
using namespace std;
int main(){
    double km;
    double l;
    double eachFuelCon;

    cout<<"Please enter the driving distance(KM): ";
    cin>>km;
    cout<<"Please enter the fuel consumption(L): ";
    cin>>l;
    eachFuelCon=l/km*100;
    cout<<"The fuel consumption per 100 kilometers is "<<eachFuelCon<<"."<<endl;

    system("pause");
    return 0;
}