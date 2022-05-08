#include<iostream>
using namespace std;

double convert(double);

int main(){
    double lightYear;
    double astunits;

    cout<<"Enter the number of light years:";
    cin>>lightYear;
    astunits=convert(lightYear);
    cout<<lightYear<<" light years = "<<astunits<<" astronomical units."<<endl;

    system("pause");
    return 0;
}

double convert(double lighty){
    return lighty*63240;
}