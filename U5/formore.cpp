#include<iostream>
using namespace std;
const int ARSIZE=16;
int main(){
    long long factorials[ARSIZE];
    factorials[1]=factorials[0]=1LL;

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