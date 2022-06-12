#ifndef EXEC2_H_
#define EXEC2_H_

#include<iostream>
#include<cctype>
using std::ostream;
using std::istream;
class String2
{
private:
    char * str;
    int len;
    static int num_str;
    static const int CINLIM=80;
public:
    String2();                      // Default constructor.
    String2(const char * s);        // Constructor.
    String2(const String2 &);       // Copy constructor.
    ~String2();                     // Destructor.
    int length() const { return len; }
    // Overloaded operator methods.
    String2 & operator=(const char *);
    String2 & operator=(const String2 &);
    char & operator[](int i);
    const char & operator[](int i) const;
    String2 & operator+(const String2 & st);       // Combine two strings into one.
    void stringlow() { for (int i = 0; i < len; i++) str[i]=tolower(str[i]); }
    void stringup() { for (int i = 0; i < len; i++) str[i]=toupper(str[i]); }
    int has(const char ch);
    // Overloaded operator friends.
    friend String2 operator+(const char * st1,const String2 & st2);
    friend bool operator<(const String2 & st1,const String2 & st2);
    friend bool operator>(const String2 & st1,const String2 & st2);
    friend bool operator==(const String2 & st1,const String2 & st2);
    friend ostream & operator<<(ostream & os,const String2 & st);
    friend istream & operator>>(istream & is,String2 & st);
    // Static function.
    static int howMany();
};

#endif