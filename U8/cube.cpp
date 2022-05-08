#include<iostream>
using namespace std;
double cube(double);
double refcube(double&);
int main(){
    double x=3.0;

    cout<<cube(x)<<" = cube of "<<x<<endl;
    cout<<refcube(x)<<" = cube of "<<x<<endl;

    system("pause");
    return 0;
}

double cube(double a){
    a*=a*a;
    return a;
}

double refcube(double & ra){
    ra*=ra*ra;
    return ra;
}