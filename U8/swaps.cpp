#include<iostream>
using namespace std;
void swapr(int&,int&);
void swapp(int*,int*);
void swapv(int,int);
int main(){
    int wallet1=300;
    int wallet2=350;
    cout<<"wallet1 = $"<<wallet1<<" wallet2 = $"<<wallet2<<endl;

    cout<<"Using references to swap contents:"<<endl;
    swapr(wallet1,wallet2);
    cout<<"wallet1 = $"<<wallet1<<" wallet2 = $"<<wallet2<<endl;

    cout<<"Using pointers to swap contents again:"<<endl;
    swapp(&wallet1,&wallet2);
    cout<<"wallet1 = $"<<wallet1<<" wallet2 = $"<<wallet2<<endl;

    cout<<"Trying to use passing by value:"<<endl;
    swapv(wallet1,wallet2);
    cout<<"wallet1 = $"<<wallet1<<" wallet2 = $"<<wallet2<<endl;

    system("pause");
    return 0;
}

void swapr(int & a,int & b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swapp(int * a,int * b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void swapv(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}