#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    int sum;

    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter a bigger number: ";
    cin>>num2;

    for (int i = num1; i <= num2; i++)
    {
        sum+=i;
    }
    cout<<"sum = "<<sum<<endl;

    system("pause");
    return 0;
}