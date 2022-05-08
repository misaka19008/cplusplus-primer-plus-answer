#include<iostream>
using namespace std;
const double * f1(const double ar[],int n);
const double * f2(const double [],int);
const double * f3(const double *,int);

int main(){
    // Pointer to a function.
    double av[3]={1112.3,1542.6,2227.9};
    const double *(*p1)(const double *,int)=f1;
    auto p2=f2;
    cout<<"Using pointers to functions:\n Address Value"<<endl;
    cout<<(*p1)(av,3)<<": "<<*(*p1)(av,3)<<endl;
    cout<<p2(av,3)<<": "<<*p2(av,3)<<endl;

    // "pa" an array of pointers.
    const double *(*pa[3])(const double *,int)={f1,f2,f3};
    auto pb=pa;
    cout<<endl<<"Using an array of pointers to functions:\n Address Value"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<pb[i](av,3)<<": "<<*pb[i](av,3)<<endl;
    }
    
    // What about a pointer to an array of function pointers?
    cout<<endl<<"Using a pointer to an array of pointers:\n Address Value"<<endl;
    auto pc=&pa;
    cout<<(*pc)[0](av,3)<<": "<<*(*pc)[0](av,3)<<endl;
    // Hard way to declare "pd".
    const double *(*(*pd)[3])(const double *,int)=&pa;
    // Store return value in "pdb".
    const double * pdb=(*pd)[1](av,3);
    cout<<"pdb -- "<<pdb<<" : "<<*pdb<<endl;
    // Alternative notation.
    cout<<(*(*pd)[2])(av,3)<<": "<<*(*(*pd)[2])(av,3)<<endl;

    system("pause");
    return 0;
}

const double * f1(const double * ar,int n){
    return ar;
}

const double * f2(const double ar[],int n){
    return ar+1;
}

const double * f3(const double ar[],int n){
    return ar+2;
}