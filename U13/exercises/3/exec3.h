#ifndef EXEC3_H_
#define EXEC3_H_
#include<iostream>
using std::ostream;

class AcctABC
{
public:
    virtual ~AcctABC() {}
    virtual void view() const = 0;
};

class baseDMA : AcctABC
{
private:
    char * label;
    int rating;
public:
    baseDMA(const char * l="null",int r=0);
    baseDMA(const baseDMA & rs);
    virtual ~baseDMA();
    virtual void view() const;
    baseDMA & operator=(const baseDMA & rs);
    friend std::ostream & operator<<(ostream & os,const baseDMA & rs);
};

class lacksDMA : public baseDMA
{
private:
    enum {COL_LEN=40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c="blank",const char * l="null",int r=0);
    lacksDMA(const char * c,const baseDMA & rs);
    virtual void view() const;
    friend ostream & operator<<(ostream & os,const lacksDMA & rs);
};

class hasDMA : public baseDMA
{
private:
    char * style;
public:
    hasDMA(const char * s="none",const char * l="null",int r=0);
    hasDMA(const char * s,const baseDMA & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    virtual void view() const;
    hasDMA & operator=(const hasDMA & rs);
    friend ostream & operator<<(ostream & os,const hasDMA & rs);
};

#endif