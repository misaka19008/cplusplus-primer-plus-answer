#include<iostream>
#include<cstring>
using namespace std;
template <typename T>
T Maxn(T arr[],int n);
int Maxn(int ptrnum,string arr[]);

int main(){
    int iArr[6]={2,98,3,148,5,2233};
    double dArr[4]={48.3,78.1,2.8,22.33};
    int iMax;
    double dMax;
    int cMax;
    string sArr[]={"EMTYYDS","op","asdfg","oloppp","mkm"};

    iMax=Maxn(iArr,6);
    dMax=Maxn(dArr,4);
    cMax=Maxn(5,sArr);
    cout<<"The max value of \"iArr\" is "<<iMax<<"."<<endl;
    cout<<"The max value of \"dArr\" is "<<dMax<<"."<<endl;
    cout<<"The longest string is \""<<sArr[cMax]<<"\". (Address: "<<&sArr[cMax]<<")"<<endl;

    system("pause");
    return 0;
}

template <typename T>
T Maxn(T arr[],int n){
    T max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max) max=arr[i];
    }
    return max;
}

int Maxn(int ptrnum,string arr[]){
    int max=0;
    for (int i = 0; i < ptrnum; i++)
    {
        if (arr[i].size() > arr[max].size()) max=i;
    }
    return max;
}