#include<iostream>
using namespace std;
template <typename T>
void Swap(T &a,T &b);

int main(){
    int i=10;
    int j=20;
    cout<<"i, j = "<<i<<", "<<j<<"."<<endl;
    cout<<"Using compiler-generated int swapper:"<<endl;
    Swap(i,j);
    cout<<"Now i, j = "<<i<<", "<<j<<"."<<endl;

    double x=24.5;
    double y=81.5;
    cout<<"x, y = "<<x<<", "<<y<<"."<<endl;
    cout<<"Using compiler-generated double swapper:"<<endl;
    Swap(x,y);
    cout<<"Now x, y = "<<x<<", "<<y<<"."<<endl;

    system("pause");
    return 0;
}

template <typename T>
void Swap(T &a,T &b){
    T temp;
    temp=a;
    a=b;
    b=temp;
}