#ifndef STRNGBAD_H_
#define STRNGBAD_H_

#include<iostream>
class strngBad
{
private:
    char * str;
    int len;
    static int num_str;
public:
    strngBad();
    strngBad(const char * s);
    ~strngBad();
    friend std::ostream & operator<<(std::ostream & os,const strngBad & st);
};

#endif