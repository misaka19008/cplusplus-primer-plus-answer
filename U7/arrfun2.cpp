#include<iostream>
using namespace std;
const int ARSIZE=8;
int sum_arr(int[],int);
int main(){
    int sum;
    int cookies[ARSIZE]={1,2,4,8,16,32,64,128};

    cout<<cookies<<" = array address, "<<sizeof(cookies)<<" = sizeof cookies."<<endl;
    sum=sum_arr(cookies,ARSIZE);
    cout<<"Total cookies eaten: "<<sum<<endl;
    sum=sum_arr(cookies,3);
    cout<<"First 3 eaters ate "<<sum<<" cookies."<<endl;
    sum=sum_arr(cookies+4,4);
    cout<<"Last 4 eaters ate "<<sum<<" cookies."<<endl;

    system("pause");
    return 0;
}

int sum_arr(int arr[],int n){
    int total=0;

    cout<<arr<<" = arr, "<<sizeof(arr)<<" = sizeof arr."<<endl;
    for (int i = 0; i < n; i++)
    {
        total+=arr[i];
    }
    return total;
}