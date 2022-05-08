#include<iostream>
using namespace std;
const int Convert=12;
int main(){
    int in;
    int tureFt;
    int tureIn;

    cout<<"Enter your height(use \"in\"): ";
    cin>>in;

    tureFt=in/Convert;
    tureIn=in%Convert;

    cout<<"Your height is "<<tureFt<<" ft and "<<tureIn<<" in."<<endl;

    system("pause");
    return 0;
}