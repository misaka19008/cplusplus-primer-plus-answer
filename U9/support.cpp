#include<iostream>
#include "header_files/sup.h"
using namespace std;
extern double warming;

void update(double dt){
    extern double warming;
    warming+=dt;
    cout<<"Update global warming to "<<warming<<" degrees."<<endl;
}

void local(){
    double warming=0.8;
    cout<<"Local warming = "<<warming<<" degrees."<<endl;
    cout<<"But global warming = "<<::warming<<" degrees."<<endl;
}