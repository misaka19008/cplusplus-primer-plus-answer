#include<cstring>
#include "exec2.h"
using std::cin;
using std::cout;

int String2::num_str=0;
int String2::howMany() { return num_str; }

String2::String2(){
    len=4;
    str=new char[1];
    str[0]='\0';
    num_str++;
}

String2::String2(const char * s){
    len=std::strlen(s);
    str=new char[len+1];
    std::strcpy(str,s);
    num_str++;
}

String2::String2(const String2 & st){
    num_str++;
    len=st.len;
    str=new char[len+1];
    std::strcpy(str,st.str);
}

String2::~String2(){
    --num_str;
    delete [] str;
}

String2 & String2::operator=(const char * s){
    delete [] str;
    len=std::strlen(s);
    str=new char[len+1];
    std::strcpy(str,s);
    return *this;
}

String2 & String2::operator=(const String2 & st){
    if (this == &st) return *this;
    else
    {
        delete [] str;
        len=st.len;
        str=new char[len+1]   ;
        std::strcpy(str,st.str);
        return *this;
    }
}

char & String2::operator[](int i) { return str[i]; }

const char & String2::operator[](int i) const { return str[i]; }

String2 & String2::operator+(const String2 & st){
    if (this == &st)
    {
        len*=2;
        std::strcpy(str,st.str);
        return *this;
    }
    else
    {
        delete [] str;
        len+=st.length();
        str=new char[len+1];
        std::strcpy(str,st.str);
        return *this;
    }
}

int String2::has(const char ch){
    int count=0;
    for (int i = 0; i < len; i++) if (ch == str[i]) count++;
    return count;
}

String2 operator+(const char * st1,const String2 & st2){
    String2 result;
    result.len=strlen(st1)+st2.length();
    result.str=new char[result.len+1];
    std::strcpy(result.str,st1);
    std::strcpy(result.str,st2.str);
    return result;
}

bool operator<(const String2 & st1,const String2 & st2) { return (std::strcmp(st1.str,st2.str) < 0); }

bool operator>(const String2 & st1,const String2 & st2) { return (std::strcmp(st1.str,st2.str) > 0); }

bool operator==(const String2 & st1,const String2 & st2) { return (std::strcmp(st1.str,st2.str) == 0); }

ostream & operator<<(ostream & os,const String2 & st){
    os<<st.str;
    return os;
}

istream & operator>>(istream & is,String2 & st){
    char temp[String2::CINLIM];
    is.get(temp,String2::CINLIM);
    if (is) st=temp;
    while (is && is.get() != '\n') continue;
    return is;
}