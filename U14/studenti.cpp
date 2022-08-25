#include "header_files/studenti.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

double Student::average() const {
    if (ArrayDB::size() > 0) return ArrayDB::sum()/ArrayDB::size();
    else return 0;
}

double & Student::operator[](int i){
    return ArrayDB::operator[](i);
}

double Student::operator[](int i) const {
    return ArrayDB::operator[](i);
}

const string & Student::getName() const {
    return (const string &) *this;
}

// Private method.
ostream & Student::arr_out(ostream & os) const {
    int i;
    int lim=ArrayDB::size();
    if (lim > 0)
    {
        for (i = 0; i < lim; i++)
        {
            os<<ArrayDB::operator[](i)<<" ";
            if (i%5 == 4) os<<endl;
        }
        if (i%5 != 0) os<<endl;
    }
    else os<<"Empty array.";
    return os;
}

istream & operator>>(istream & is,Student & stu){
    is>>(string &)stu;
    return is;
}

istream & getline(istream & is,Student & stu){
    getline(is,(string &)stu);
    return is;
}

ostream & operator<<(ostream & os,Student & stu){
    os<<"Score for "<<(const string &)stu<<":"<<endl;
    stu.arr_out(os);
    return os;
}