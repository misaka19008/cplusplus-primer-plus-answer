#include<iostream>
using namespace std;
double get_harmMean(double,double);
int main(){
    double x=0.0;
    double y=0.0;
    double result=0.0;

    cout<<"Enter two number, space to separate: ";
    while (cin>>x>>y && x != 0 && y != 0)
    {
        result=get_harmMean(x,y);
        cout<<"Harmean is "<<result<<endl;
        cout<<"Enter two number, space to separate: ";
    }
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}

double get_harmMean(double num_x,double num_y){
    return 2.0*num_x*num_y/(num_x+num_y);
}