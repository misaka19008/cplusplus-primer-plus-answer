#include<iostream>
using namespace std;

double convert(double);

int main(){
    double c;
    double f;

    cout<<"Please enter a Celsius value:";
    cin>>c;
    f=convert(c);
    cout<<c<<" degrees Celsius is "<<f<<" degrees Fahrenheit."<<endl;

    system("pause");
    return 0;
}

double convert(double celsius){
    return celsius*1.8+32.0;
}