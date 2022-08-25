#include "header_files/studentc.h"
using std::ostream;
using std::endl;
using std::istream;
using std::string;

ostream & Student::arr_out(ostream & os) const {
    int i;
    int lim=scores.size();
    if (lim > 0)
    {
        for (int i = 0; i < lim; i++)
        {
            os<<scores[i]<<" ";
            if (i % 5 == 4) os<<endl;
        }
        if (i % 5 != 0) os<<endl;
    }
    else os<<"Empty array.";
    return os;
}

double Student::average() const {
    if (scores.size() > 0) return scores.sum()/scores.size();
    else return 0;
}

const string & Student::getName() const {
    return name;
}

double & Student::operator[](int index){
    return scores[index];
}

double Student::operator[](int index) const {
    return scores[index];
}

istream & operator>>(istream & is,Student & stu){
    is>>stu.name;
    return is;
}

istream & getline(istream & is,Student & stu){
    getline(is,stu.name);
    return is;
}

ostream & operator<<(ostream & os,Student & stu){
    os<<"Scores for "<<stu.name<<":"<<endl;
    stu.arr_out(os);
    return os;
}