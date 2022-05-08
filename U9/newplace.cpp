#include<iostream>
#include<new>
using namespace std;
const int BUF=512;
const int N=5;
char buffer[BUF];
int main(){
    int i;
    double * pd1;
    double * pd2;
    double * pd3;
    double * pd4;

    cout<<"Calling new and placement new:"<<endl;
    pd1=new double[N];
    pd2=new (buffer) double[N];
    for (i = 0; i < N; i++) pd2[i]=pd1[i]=1000+20.0*i;
    cout<<"Memory addresses:"<<endl<<" Heap: "<<pd1<<" Static: "<<(void *)buffer<<endl;
    cout<<"Memory contents:"<<endl;
    for (i = 0; i < N; i++) cout<<pd1[i]<<" at "<<&pd1[i]<<"; "<<pd2[i]<<" at "<<&pd2[i]<<endl;
    cout<<endl<<"Calling new and placement new a second time:"<<endl;
    pd3=new double[N];
    pd4=new (buffer) double[N];
    for (i = 0; i < N; i++) pd4[i]=pd3[i]=1000+40.0*i;
    cout<<"Memory contents:"<<endl;
    for (i = 0; i < N; i++) cout<<pd3[i]<<" at "<<&pd3[i]<<"; "<<pd4[i]<<" at "<<&pd4[i]<<endl;
    cout<<endl<<"Calling new and placement new a third time:"<<endl;
    delete [] pd1;
    pd1=new double[N];
    pd2=new (buffer+N*sizeof(double)) double[N];
    for (i = 0; i < N; i++) pd2[i]=pd1[i]=1000+60.0*i;
    cout<<"Memory contents:"<<endl;
    for (i = 0; i < N; i++) cout<<pd1[i]<<" at "<<&pd1[i]<<"; "<<pd2[i]<<" at "<<&pd2[i]<<endl;
    delete [] pd1;
    delete [] pd3;

    system("pause");
    return 0;
}