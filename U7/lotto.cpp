#include<iostream>
using namespace std;
long double probab(unsigned,unsigned);
int main(){
    double total;
    double choices;

    cout<<"Enter the total number of choices on the game card and the number of picks allowed:"<<endl;
    while ((cin>>total>>choices) && choices <= total)
    {
        cout<<"You have one chance in "<<probab(total,choices)<<" of winning."<<endl;
        cout<<"Next two numbers, \"q\" to quit: ";
    }
    cout<<"Bye!"<<endl;

    system("pause");
    return 0;
}

long double probab(unsigned numbers,unsigned picks){
    unsigned p;
    long double n;
    long double result=1.0;

    for (n = numbers, p = picks; p > 0; n--, p--)
    {
        result=result*n/p;
    }
    return result;
}