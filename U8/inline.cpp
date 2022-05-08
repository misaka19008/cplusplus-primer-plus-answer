#include<iostream>
using namespace std;
inline double square(double x) { return x*x; }
int main(){
    double a;
    double b;
    double c=13.0;

    a=square(5.0);
    b=square(4.5+7.5);
    cout<<"a = "<<a<<", b = "<<b<<endl;
    cout<<"c = "<<c<<", c squared = "<<square(c++)<<endl;
    cout<<"Now c = "<<c<<endl;

    system("pause");
    return 0;
}