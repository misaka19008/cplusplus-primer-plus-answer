#include<iostream>
using namespace std;
template <typename T>
void Swap(T &a,T &b);
template <typename T>
void Swap(T *a,T *b,int n);
void show(int a[]);
const int LIMIT=8;
int main(){
    int i=10;
    int j=20;
    cout<<"i, j = "<<i<<", "<<j<<"."<<endl;
    cout<<"Using compiler-generated int swapper:"<<endl;
    Swap(i,j);
    cout<<"Now i, j = "<<i<<", "<<j<<"."<<endl;

    int d1[LIMIT]={0,7,0,4,1,7,7,6};
    int d2[LIMIT]={0,7,2,0,1,9,6,9};
    cout<<"Original arrays:"<<endl;
    show(d1);
    show(d2);
    Swap(d1,d2,LIMIT);
    cout<<"Swapped arrays:"<<endl;
    show(d1);
    show(d2);

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

template <typename T>
void Swap(T *a,T *b,int n){
    T temp;
    for (int i = 0; i < n; i++)
    {
        temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}

void show(int a[]){
    cout<<a[0]<<a[1]<<"/";
    cout<<a[2]<<a[3]<<"/";
    for (int i = 4; i < LIMIT; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
}