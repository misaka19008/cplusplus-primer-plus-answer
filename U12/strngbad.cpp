#include<cstring>
#include "header_files/strngbad.h"
using std::cout;
using std::endl;
int strngBad::num_str=0;

strngBad::strngBad(){
    len=4;
    str=new char[4];
    std::strcpy(str,"C++");
    num_str++;
    cout<<num_str<<": \""<<str<<"\" default object created."<<endl;
}

strngBad::strngBad(const char * s){
    len=std::strlen(s);
    str=new char[len+1];
    std::strcpy(str,s);
    num_str++;
    cout<<num_str<<": \""<<str<<"\" object created."<<endl;
}

strngBad::~strngBad(){
    cout<<"\""<<str<<"\" object deleted, ";
    --num_str;
    cout<<num_str<<" left."<<endl;
    delete [] str;
}

std::ostream & operator<<(std::ostream & os,const strngBad & st){
    os<<st.str;
    return os;
}