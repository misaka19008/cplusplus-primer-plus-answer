#include<iostream>
#include<cstring>
#include "exec1.h"
using std::cout;
using std::endl;
using std::strlen;
using std::strcpy;

Cow::Cow(){
    hobby=nullptr;
    weight=0.0;
}

Cow::Cow(const char * nm,const char * ho,double wt){
    strcpy(name,nm);
    hobby=new char[strlen(ho)+1];
    strcpy(hobby,ho);
    weight=wt;
}

Cow::Cow(const Cow & c){
    strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    weight=c.weight;
}

Cow::~Cow(){
    if (hobby != nullptr) delete [] hobby;
    cout<<"Destructor called!"<<endl;
}

Cow & Cow::operator=(const Cow & c){
    if (&c == this) return *this;
    else
    {
        if (hobby == nullptr) delete [] hobby;
        strcpy(name,c.name);
        hobby=new char[strlen(c.hobby)+1];
        strcpy(hobby,c.hobby);
        weight=c.weight;
        return *this;
    }
}

void Cow::ShowCow() const {
    if (name[0] == '\0' || hobby == nullptr) cout<<"Null"<<endl;
    else
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Hobby: "<<hobby<<endl;
        cout<<"Weight: "<<weight<<endl;
    }
}