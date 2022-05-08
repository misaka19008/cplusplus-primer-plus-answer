#include<iostream>
#include<array>
using namespace std;
const int ARSIZE=16;
int main(){
    array<long double,ARSIZE> factorials={1.0L,1.0L};
    for (int i = 2; i < ARSIZE; i++)
    {
        factorials[i]=i*factorials[i-1];
    }
    for (int i = 0; i < ARSIZE; i++)
    {
        cout<<i<<"! = "<<factorials[i]<<endl;
    }
    
    system("pause");
    return 0;
}