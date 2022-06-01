#include<iostream>
#include "header_files/stonewt.h"
using std::cout;

Stonewt::Stonewt(){
    stone=pounds=pds_left=0;
}

Stonewt::Stonewt(double lbs){
    stone=int(lbs)/LBS_PER_STN;
    pds_left=int(lbs)%LBS_PER_STN+lbs-int(lbs);
    pounds=lbs;
}

Stonewt::Stonewt(int stn,double lbs){
    stone=stn;
    pds_left=lbs;
    pounds=stn*LBS_PER_STN+lbs;
}

Stonewt::~Stonewt(){
    // Default destructor.
}

void Stonewt::show_lbs() const {
    cout<<pounds<<" pounds.\n";
}

void Stonewt::show_stn() const {
    cout<<stone<<" stone, "<<pds_left<<" pounds.\n";
}