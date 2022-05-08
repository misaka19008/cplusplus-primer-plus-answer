#include<iostream>
using namespace std;
long long getResult(int);
int main(){
    int num=0;
    int result=0;

    cout<<"Enter a integer: ";
    while (cin>>num && num > 0)
    {
        result=getResult(num);
        if (result != 0)
        {
            cout<<num<<"! : "<<result<<endl;
        }
        else
        {
            cout<<"Error: Out of range!"<<endl;
        }
        cout<<"Enter next integer, type char to quit: ";
    }
    cout<<"Bye!"<<endl;

    system("pause");
    return 0;
}

long long getResult(int n){
    if (n > 0)
    {
        return n*getResult(n-1);
    }
    return 1;
}