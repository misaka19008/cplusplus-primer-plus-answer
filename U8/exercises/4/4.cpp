#include<iostream>
#include<cstring>
using namespace std;
struct stringy
{
    char * str;
    int ct;
};
void set(stringy & data,char * st);
inline void show(const stringy data,int count=1) { for (int i = 0; i < count; i++) cout<<data.str<<endl; }
inline void show(const char * st,int count=1) { for (int i = 0; i < count; i++) cout<<st<<endl; }

int main(){
    stringy beany;
    char testing[]="Reality isn't what it used to be.";

    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0]='D';
    testing[1]='u';
    show(testing);
    show(testing,3);
    show("Done!");
    delete beany.str;

    system("pause");
    return 0;
}

void set(stringy & data,char * st){
    data.ct=strlen(st);
    data.str=new char[data.ct+1];
    strcpy(data.str,st);
}