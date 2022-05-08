#include<iostream>
using namespace std;
const double ConvertFuelCon=3.785;
int main(){
    double eurFuelCon;
    double usaFuelCon;

    cout<<"Enter the fuel consumption in Europe style: ";
    cin>>eurFuelCon;
    usaFuelCon=62.14/(eurFuelCon/ConvertFuelCon);
    cout<<"The fuel consumption in American style is "<<usaFuelCon<<" MPG."<<endl;

    system("pause");
    return 0;
}