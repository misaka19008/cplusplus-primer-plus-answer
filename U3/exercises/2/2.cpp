#include<iostream>
#include<iomanip>
using namespace std;

const int Ft_to_in=12;
const float In_to_m=0.0254;
const float Pound_to_kg=2.2;

int main(){
    int ft;
    int in;
    int trueIn;
    float pound;
    float meters;
    float kg;
    double bmi;
    cout.setf(ios_base::fixed);

    cout<<"Please enter you height in feet(Integers Only): ";
    cin>>ft;
    cout<<"Enter the remaining values in inch(Integers Only): ";
    cin>>in;
    cout<<"Enter your weight in pounds: ";
    cin>>pound;

    trueIn=ft*Ft_to_in+in;
    meters=trueIn*In_to_m;

    kg=pound/Pound_to_kg;

    bmi=kg/(meters*meters);

    cout<<"Your BMI is "<<fixed<<setprecision(3)<<bmi<<" ."<<endl;

    system("pause");
    return 0;
}