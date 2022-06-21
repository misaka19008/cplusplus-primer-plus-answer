#include<iostream>
#include "exec2.h"
using namespace std;
inline void Bravo(const Cd & disk) { disk.report(); }

int main(){
    Cd c1("Beatles","Capitol",14,35.5);
    Classic c2=Classic("Piano Sonata in B flat, Fantasia in C","Alfred Brendel","Philips",2,57.17);
    Cd * pcd=&c1;

    cout<<"Using object directly:"<<endl;
    c1.report();
    c2.report();
    cout<<"Using type Cd * pointer to objects:"<<endl;
    pcd->report();
    pcd=&c2;
    pcd->report();
    cout<<"Calling a function with a Cd reference arugment:"<<endl;
    Bravo(c1);
    Bravo(c2);
    cout<<"Testing assignment:"<<endl;
    Classic copy;
    copy=c2;
    copy.report();

    system("pause");
    return 0;
}