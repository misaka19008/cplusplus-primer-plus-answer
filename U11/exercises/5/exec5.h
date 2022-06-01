#ifndef EXEC5_H_
#define EXEC5_H_

#include<iostream>
class Stonewt
{
public:
    enum Mode{toSTN,toPOU};
    Mode mode;
private:
    enum {LBS_PER_STN=14};
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt();
    Stonewt(double lbs);
    Stonewt(int stn,double lbs);
    ~Stonewt();
    friend std::ostream & operator<<(std::ostream & os,const Stonewt & s);
};

#endif