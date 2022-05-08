#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float treacle[10]={108.0,112.0,105.0,98.0,115.0,116.5,113.0,117.0,116.0,120.0};
    float * ptr=treacle;
    cout.setf(ios_base::fixed);
    cout<<fixed<<setprecision(1)<<ptr[0]<<endl<<fixed<<setprecision(1)<<ptr[9]<<endl;
    system("pause");
    return 0;
}