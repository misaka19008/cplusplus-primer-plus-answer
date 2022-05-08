#include<iostream>
#include "header_files/twofile.h"
using namespace std;
extern int tom;
static int dick=10;
int harry=200;

void remote_access(){
    cout<<"remote_access() reports the following addresses:"<<endl;
    cout<<&tom<<" = &tom, "<<&dick<<" = &dick, "<<&harry<<" = &harry"<<endl;
}