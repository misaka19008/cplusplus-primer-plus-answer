#include<iostream>
#include "exec6.h"
using namespace std;

Move::Move(double a,double b){
    x=a;
    y=b;
}

Move::~Move(){
    // Default destructor.
}

void Move::showMove() const {
    cout<<"Default: ("<<x<<","<<y<<")"<<endl;
}

Move Move::add(const Move & m) {
    x+=m.x;
    y+=m.y;
    return *this;
}

void Move::reset(double a,double b){
    x=a;
    y=b;
}