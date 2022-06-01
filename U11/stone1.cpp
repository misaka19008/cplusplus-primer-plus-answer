#include<iostream>
#include "header_files/stonewt1.h"
using std::cout;
using std::endl;
int main(){
    Stonewt poppins(9,2.8);
    double p_wt=poppins;
    cout<<"Convert to double => ";
    cout<<"Poppins: "<<p_wt<<" pounds."<<endl;
    cout<<"Convert to int => ";
    cout<<"Poppins: "<<int(poppins)<<" pounds."<<endl;

    system("pause");
    return 0;
}