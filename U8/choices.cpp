#include<iostream>
using namespace std;
template <typename T>
T lesser(T a,T b){      // #1
    return a<b?a:b;
}
int lesser(int a,int b){        // #2
    a=a<0?-a:a;
    b=b<0?-b:b;
    return a<b?a:b;
}

int main(){
    int m=20;
    int n=-30;
    double x=15.5;
    double y=25.9;

    cout<<lesser(m,n)<<endl;        // Use #2.
    cout<<lesser(x,y)<<endl;        // Use #1 with double.
    cout<<lesser<>(m,n)<<endl;      // Use #1 with int.
    cout<<lesser<int>(x,y)<<endl;   // Use #1 with int.

    system("pause");
    return 0;
}