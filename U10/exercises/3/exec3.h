#ifndef EXEC3_H_
#define EXEC3_H_

const int LEN=90;
class Golf
{
private:
    char fullname[90];
    int handicap;
public:
    Golf();
    Golf(const char * name,int hicap);
    ~Golf();
    void setHicap(int hc);
    void showGolf();
};

#endif