#include<iostream>
#include "header_files/sup.h"
using namespace std;
double warming=0.3;

int main(){
    cout<<"Global warming is "<<warming<<" degrees."<<endl;
    update(0.1);
    cout<<"Global warming is "<<warming<<" degrees."<<endl;
    local();
    cout<<"Global warming is "<<warming<<" degrees."<<endl;

    system("pause");
    return 0;
}