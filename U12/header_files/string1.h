#ifndef STRING1_H_
#define STRING1_H_

#include<iostream>
using std::ostream;
using std::istream;
class String1
{
private:
    char * str;
    int len;
    static int num_str;
    static const int CINLIM=80;
public:
    String1();                      // Default constructor.
    String1(const char * s);        // Constructor.
    String1(const String1 &);       // Copy constructor.
    ~String1();                     // Destructor.
    int length() const { return len; }
    // Overloaded operator methods.
    String1 & operator=(const char *);
    String1 & operator=(const String1 &);
    char & operator[](int i);
    const char & operator[](int i) const;
    // Overloaded operator friends.
    friend bool operator<(const String1 & st1,const String1 & st2);
    friend bool operator>(const String1 & st1,const String1 & st2);
    friend bool operator==(const String1 & st1,const String1 & st2);
    friend ostream & operator<<(ostream & os,const String1 & st);
    friend istream & operator>>(istream & is,String1 & st);
    // Static function.
    static int howMany();
};

#endif