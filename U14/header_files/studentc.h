#ifndef STUDENTC_H_
#define STUDENTC_H_
#include<iostream>
#include<string>
#include<valarray>

class Student
{
private:
    typedef std::valarray<double> ArrayDB;
    std::string name;
    ArrayDB scores;
    // 针对score对象进行输出的私有方法
    std::ostream & arr_out(std::ostream & os) const;
public:
    Student() : name("<unknown>"),scores() {}
    explicit Student(std::string & s) : name(s),scores() {}
    explicit Student(int n) : name("<unknown>"),scores() {}
    Student(const std::string & s,int n) : name(s),scores(n) {}
    Student(const std::string & s,ArrayDB & a) : name(s),scores(a) {}
    Student(const char * str,const double * pd,int n) : name(str),scores(pd,n) {}
    ~Student() {}
    double average() const;
    const std::string & getName() const;
    double & operator[](int index);
    double operator[](int index) const;
    // Friends
    friend std::istream & operator>>(std::istream & is,Student & stu);  // 读取一个单词
    friend std::istream & getline(std::istream & is,Student & stu);     // 读取一行
    friend std::ostream & operator<<(std::ostream & os,Student & stu);  // 输出
};

#endif