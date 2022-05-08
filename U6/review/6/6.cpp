#include<iostream>
using namespace std;
int main(){
    int x;
    int result;

    cout<<"Enter a number: ";
    cin>>x;
    x>0?result=x:result=-x;
    cout<<"result = "<<result<<endl;

    system("pause");
    return 0;
}