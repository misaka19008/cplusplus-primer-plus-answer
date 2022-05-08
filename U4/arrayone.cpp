#include<iostream>
using namespace std;
int main(){
    int total;
    int yams[3];
    yams[0]=7;
    yams[1]=8;
    yams[2]=5;
    int yamcosts[3]={20,30,5};

    cout<<"Total yams = "<<yams[0]+yams[1]+yams[2]<<endl;
    cout<<"The packages with "<<yams[1]<<" yams costs "<<yamcosts[1]<<" cents per yam."<<endl;
    total=yams[0]*yamcosts[0]+yams[1]*yamcosts[1]+yams[2]*yamcosts[2];
    cout<<"The total yam expense is "<<total<<" cents"<<endl<<endl;

    cout<<"Size of array \"yams\" = "<<sizeof yams<<" bytes."<<endl;
    cout<<"Size of one element = "<<sizeof yams[0]<<" bytes."<<endl;

    system("pause");
    return 0;
}