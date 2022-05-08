#include<iostream>
using namespace std;
int main(){
    double * p3=new double [3];
    p3[0]=1.1;
    p3[1]=2.2;
    p3[2]=3.3;

    cout<<"p3[1] is "<<p3[1]<<"."<<endl;
    p3=p3+1;
    cout<<"Now p3[0] is "<<p3[0]<<" and p3[1] is "<<p3[1]<<"."<<endl;
    p3=p3-1;
    delete [] p3;

    system("pause");
    return 0;
}