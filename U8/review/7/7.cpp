#include<iostream>
using namespace std;
template <typename T>
inline T getMaxValue(T a,T b) { return a>b?a:b; }
int main(){
    double num1;
    double num2;
    double max_value;

    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter another number: ";
    cin>>num2;
    max_value=getMaxValue(num1,num2);
    cout<<"The max value is "<<max_value<<"."<<endl<<endl;

    system("pause");
    return 0;
}