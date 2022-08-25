#include<iostream>
#include "header_files/stacktp.h"
using std::cin;
using std::cout;
using std::endl;

template <template <typename T> class Thing>
class Crab
{
private:
    Thing<int> s1;
    Thing<double> s2;
public:
    Crab() {}
    bool push(int a,double x) { return s1.push(a) && s2.push(x); }
    bool pop(int & a,double & x) { return s1.pop(a) && s2.pop(x); }
};

int main(){
    int ni;
    double nb;
    Crab<Stack> nebula;

    cout<<"Enter int double pairs, such as 4 3.5 (0 0 to end):"<<endl;
    while (cin>>ni>>nb && ni > 0 && nb > 0) if (!nebula.push(ni,nb)) break;
    while (nebula.pop(ni,nb)) cout<<ni<<", "<<nb<<endl;
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}