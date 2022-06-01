#include<iostream>
#include "exec5.h"
using std::cout;
using std::endl;

Stonewt::Stonewt(){
    stone=pounds=pds_left=0;
}

Stonewt::Stonewt(double lbs){           // 磅转英石
    mode=toSTN;
    stone=int(lbs)/LBS_PER_STN;
    pds_left=int(lbs)%LBS_PER_STN+lbs-int(lbs);
    pounds=lbs;
}

Stonewt::Stonewt(int stn,double lbs){   // 英石转磅
    mode=toPOU;
    stone=stn;
    pds_left=lbs;
    pounds=stn*LBS_PER_STN+lbs;
}

Stonewt::~Stonewt(){
    // Default destructor.
}

std::ostream & operator<<(std::ostream & os,const Stonewt & s){
    if (s.mode == s.toPOU) os<<s.pounds<<" pounds.\n";
    else if (s.mode == s.toSTN) os<<s.stone<<" stone, "<<s.pds_left<<" pounds.\n";
    else
    {
        os<<"Error!"<<endl;
        system("pause");
        exit(EXIT_FAILURE);
    }
    return os;
}