#include<iostream>
using namespace std;
const int ARSIZE=8;
int sum_arr(const int*,const int*);
int main(){
    int sum=0;
    int cookies[ARSIZE]={1,2,4,8,16,32,64,128};

    sum=sum_arr(cookies,cookies+ARSIZE);
    cout<<"Total cookies eaten: "<<sum<<endl;
    sum=sum_arr(cookies,cookies+3);
    cout<<"First three eaters ate "<<sum<<" cookies."<<endl;
    sum=sum_arr(cookies+4,cookies+ARSIZE);
    cout<<"Last four eaters ate "<<sum<<" cookies."<<endl;

    system("pause");
    return 0;
}

int sum_arr(const int * begin,const int * end){
    int total=0;
    const int * pt;

    for (pt = begin; pt != end; pt++)
    {
        total+=*pt;
    }
    return total;
}