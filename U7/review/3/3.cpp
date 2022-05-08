#include<iostream>
using namespace std;
void setarr(int *,int,int);

int main(){
    int arr_size=0;
    cout<<"Enter the array length: ";
    cin>>arr_size;
    int num_array[arr_size];
    int num_fill=0;

    cout<<"Enter an integer: ";
    cin>>num_fill;
    setarr(num_array,arr_size,num_fill);
    cout<<"Array:"<<endl;
    for (int i = 0; i < arr_size; i++)
    {
        cout<<num_array[i]<<"   ";
    }
    cout<<endl;

    system("pause");
    return 0;
}

void setarr(int num_arr[],int arsize,int num){
    for (int i = 0; i < arsize; i++)
    {
        num_arr[i]=num;
    }
}