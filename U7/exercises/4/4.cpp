#include<iostream>
using namespace std;
long double probab(unsigned,unsigned);
int main(){
    double total_first=47;
    double choices_first=5;
    double total_second=27;
    double choices_second=1;
    double ans_first=0.0;
    double ans_second=0.0;
    double result=0.0;

    ans_first=probab(total_first,choices_first);
    ans_second=probab(total_second,choices_second);
    result=ans_first*ans_second;
    cout<<"Result: "<<result<<endl;

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