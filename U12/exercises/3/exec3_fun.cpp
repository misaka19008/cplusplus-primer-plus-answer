#include<iostream>
#include<cstring>
#include "exec3.h"
using std::ios_base;
using std::streamsize;
using std::endl;

Stock::Stock(){
    company=new char[5];
    std::strcpy(company,"Null");
    shares=0;
    share_val=0.0;
    total_val=0.0;
}

Stock::Stock(const char * co,long n,double pr){
    company=new char[std::strlen(co)+1];
    std::strcpy(company,co);
    if (n < 0)
    {
        std::cout<<"Number of shares can't be negative. "<<company<<" shares set to 0."<<std::endl;
        shares=0;
    }
    else shares=n;
    share_val=pr;
    set_tot();
}

Stock::~Stock(){
    if (company != nullptr) delete [] company;
}

void Stock::buy(long num,double price){
    if (num < 0) std::cout<<"Number of shares purchased can't be negative. Transaction is aborted."<<std::endl;
    else
    {
        shares+=num;
        share_val=price;
        set_tot();
    }
}

void Stock::sell(long num,double price){
    if (num < 0) std::cout<<"Number of shares purchased can't be negative. Transaction is aborted."<<std::endl;
    else if (num > shares) std::cout<<"You can't sell more than you have! Transaction is aborted."<<std::endl;
    else
    {
        shares-=num;
        share_val=price;
        set_tot();
    }
}

void Stock::update(double price){
    share_val=price;
    set_tot();
}

const Stock & Stock::topval(const Stock & s) const {
    return s.total_val>total_val?s:*this;
}

ostream & operator<<(ostream & os,const Stock & st){
    ios_base::fmtflags orig=os.setf(ios_base::fixed,ios_base::floatfield);
    streamsize prec=os.precision(3);
    os<<"Company: "<<st.company<<endl;
    os<<"  Shares: "<<st.shares<<endl;
    os<<"  Share Price: $"<<st.share_val<<endl;
    os.precision(3);
    os<<"  Total Worth: $"<<st.total_val<<endl;
    os.setf(orig,ios_base::floatfield);
    os.precision(prec);
    return os;
}