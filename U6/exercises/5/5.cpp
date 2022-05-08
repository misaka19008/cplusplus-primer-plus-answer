#include<iostream>
using namespace std;
int main(){
    double tax;
    int tvarp;

    cout<<"Enter how much money you have coming in: ";
    while (cin>>tvarp && tvarp >= 0)
    {
        if (tvarp <= 5000)
        {
            tax=0;
        }
        else if (tvarp > 5000 && tvarp <= 15000)
        {
            tax=(tvarp-5000)*0.1;
        }
        else if (tvarp > 15000 && tvarp <= 35000)
        {
            tax=10000.0*0.1+(tvarp-15000)*0.15;
        }
        else
        {
            tax=10000.0*0.1+20000*0.15+(tvarp-35000)*0.2;
        }
        cout<<"tax = "<<tax<<endl;
        cout<<"Enter how much money you have coming in: ";
    }
    cout<<"Bye!"<<endl;

    system("pause");
    return 0;
}