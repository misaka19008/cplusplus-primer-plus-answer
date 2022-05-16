#include<iostream>
#include<cstring>
#include "exec7.h"
using namespace std;

Plorg::Plorg(){
    strcpy(plorg_name,"Plorga");
    CI=50;
}

Plorg::Plorg(const char * name,int newCI){
    strcpy(plorg_name,name);
    CI=newCI;
}

Plorg::~Plorg(){
    // Default destructor.
}

void Plorg::setNewCI(int newCI){
    CI=newCI;
}

void Plorg::showPlorg() const {
    cout<<"Name: "<<plorg_name<<endl;
    cout<<"CI: "<<CI<<endl;
}