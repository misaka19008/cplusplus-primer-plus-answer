#include<iostream>
using namespace std;
const int ARSIZE=80;
char * left(const char * str,int n=1);
int main(){
    char * ps;
    char simple[ARSIZE];

    cout<<"Enter a string:"<<endl;
    cin.get(simple,ARSIZE);
    ps=left(simple,4);
    cout<<ps<<endl;
    delete [] ps;
    ps=left(simple);
    cout<<ps<<endl;
    delete [] ps;

    system("pause");
    return 0;
}

char * left(const char * str,int n){
    int i;
    if (n < 0)
    {
        n=0;
    }
    char * p=new char[n+1];
    for (i = 0; i < n && str[i]; i++)
    {
        p[i]=str[i];
    }
    while (i <= n)
    {
        p[i++]='\0';
    }
    return p;
}