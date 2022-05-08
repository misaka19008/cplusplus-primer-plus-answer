#include<iostream>
#include "header_files/twofile.h"
using namespace std;
int tom=3;
int dick=30;
static int harry=300;

int main(){
    cout<<"main() reports the following addresses:"<<endl;
    cout<<&tom<<" = &tom, "<<&dick<<" = &dick, "<<&harry<<" = &harry"<<endl;
    remote_access();

    system("pause");
    return 0;
}