#ifndef STUDENTI_H_
#define STUDENTI_H_
#include<iostream>
#include<valarray>
#include<string>

class Student : private std::string,private std::valarray<double>
{
private:
    typedef std::valarray<double> ArrayDB;
    std::ostream & arr_out(std::ostream & os) const;
public:
    Student() : std::string("Null Student"),ArrayDB() {}
    explicit Student(const std::string & s) : std::string(s),ArrayDB() {}
    explicit Student(int n) : std::string("Null Student"),ArrayDB() {}
    Student(const std::string & s,int n) : std::string(s),ArrayDB(n) {}
    Student(const std::string & s,const ArrayDB & a) : std::string(s),ArrayDB(a) {}
    Student(const char * str,const double * pd,int n) : std::string(str),ArrayDB(pd,n) {}
    ~Student() {}
    double average() const;
    double & operator[](int i);
    double operator[](int i) const;
    const std::string & getName() const;
    friend std::istream & operator>>(std::istream & is,Student & stu);
    friend std::istream & getline(std::istream & is,Student & stu);
    friend std::ostream & operator<<(std::ostream & os,Student & stu);
};

#endif