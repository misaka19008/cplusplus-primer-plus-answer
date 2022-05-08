#include<iostream>
using namespace std;
const int ARSIZE=8;
int sum_arr(int[],int);
int main(){
    int sum;
    int cookies[ARSIZE]={1,2,4,8,16,32,64,128};

    sum=sum_arr(cookies,ARSIZE);
    cout<<"Total cookies eaten: "<<sum<<"."<<endl;

    system("pause");
    return 0;
}

int sum_arr(int arr[],int n){
    int total=0;

    for (int i = 0; i < n; i++)
    {
        total+=arr[i];
    }
    return total;
}