#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float ideas[5]={1.0,2.0,3.0,4.0,5.0};
    cout.setf(ios_base::fixed);
    cout<<fixed<<setprecision(1)<<ideas[1]<<endl;
    
    system("pause");
    return 0;
}