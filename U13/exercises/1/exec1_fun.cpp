#include<iostream>
#include<cstring>
#include "exec1.h"
using std::cout;
using std::endl;

Cd::Cd(){
    performers[0]='\0';
    label[0]='\0';
    selections=0;
    playtime=0.0;
}

Cd::Cd(char * s1,char * s2,int n,double x){
    strncpy(performers,s1,50);
    if (strlen(s1) >= 50) performers[49]='\0';
    else performers[strlen(s1)]='\0';
    strncpy(label,s2,20);
    if (strlen(s2) >= 20) performers[19]='\0';
    else performers[strlen(s2)]='\0';
    selections=n;
    playtime=x;
}

Cd::Cd(const Cd & d){
    strcpy(performers,d.performers);
    strcpy(label,d.label);
    selections=d.selections;
    playtime=d.playtime;
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
        strcpy(performers,d.performers);
        strcpy(label,d.label);
        selections=d.selections;
        playtime=d.playtime;
        return *this;
    }
}

Classic::Classic() : Cd() {
    introduce[0]='\0';
}

Classic::Classic(char * intro,char * s1,char * s2,int n,double x) : Cd(s1,s2,n,x) {
    strncpy(introduce,intro,90);
    if (strlen(intro) >= 90) introduce[89]='\0';
    else introduce[strlen(intro)]='\0';
}

Classic::Classic(const Classic & cl) : Cd(cl) {
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
        strcpy(introduce,cl.introduce);
        return *this;
    }
}