#ifndef STONEWT1_H_
#define STONEWT1_H_

class Stonewt
{
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
    void show_lbs() const;
    void show_stn() const;
    // Conversion functions.
    operator int() const;
    operator double() const;
};

#endif