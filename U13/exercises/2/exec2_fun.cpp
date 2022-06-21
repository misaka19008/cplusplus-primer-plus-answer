#include<iostream>
#include<cstring>
#include "exec2.h"
using std::cout;
using std::endl;

Cd::Cd(){
    performers=nullptr;
    label=nullptr;
    selections=0;
    playtime=0.0;
}

Cd::Cd(char * s1,char * s2,int n,double x){
    performers=new char[strlen(s1)+1];
    strcpy(performers,s1);
    label=new char[strlen(s2)+1];
    strcpy(label,s2);
    selections=n;
    playtime=x;
}

Cd::Cd(const Cd & d){
    performers=new char[strlen(d.performers)+1];
    strcpy(performers,d.performers);
    label=new char[strlen(d.label)+1];
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
}

Cd::~Cd(){
    if (performers != nullptr) delete [] performers;
    if (label != nullptr) delete [] label;
}

void Cd::report() const {
    cout<<"Performers: "<<performers<<endl;
    cout<<"Label: "<<label<<endl;
    cout<<"Selections: "<<selections<<endl;
    cout<<"Playtime: "<<playtime<<endl;
}

Cd & Cd::operator=(const Cd & d){
    if (this == &d) return *this;
    else
    {
        performers=new char[strlen(d.performers)+1];
        strcpy(performers,d.performers);
        label=new char[strlen(d.label)+1];
        strcpy(label,d.label);
        selections=d.selections;
        playtime=d.playtime;
        return *this;
    }
}

Classic::Classic() : Cd() {
    introduce=nullptr;
}

Classic::Classic(char * intro,char * s1,char * s2,int n,double x) : Cd(s1,s2,n,x) {
    introduce=new char[strlen(intro)+1];
    strcpy(introduce,intro);
}

Classic::Classic(const Classic & cl) : Cd(cl) {
    introduce=new char[strlen(cl.introduce)+1];
    strcpy(introduce,cl.introduce);
}

void Classic::report() const {
    Cd::report();
    cout<<"Introduce: "<<introduce<<endl;
}

Classic & Classic::operator=(const Classic & cl){
    if (this == &cl) return *this;
    else
    {
        Cd::operator=(cl);
        introduce=new char[strlen(cl.introduce)+1];
        strcpy(introduce,cl.introduce);
        return *this;
    }
}