#include<iostream>
#include<cstring>
#include "exec2.h"
using namespace std;

Person::Person(){
    lname="Default";
    fname[0]='\0';
}

Person::Person(const std::string & ln,const char * fn){
    lname=ln;
    strcpy(fname,fn);
}

void Person::Show() const {
    cout<<fname<<" "<<lname<<endl;
}

void Person::FormatShow() const {
    cout<<lname<<" "<<fname<<endl;
}