#include<iostream>
using namespace std;
void setarr(int *,int *,int);

int main(){
    int arr_size=0;
    cout<<"Enter the array length: ";
    cin>>arr_size;
    int num_array[arr_size];
    int num_fill=0;
    int * arr_begin=&num_array[0];
    int * arr_end=&num_array[arr_size];

    cout<<"Enter an integer: ";
    cin>>num_fill;
    setarr(arr_begin,arr_end,num_fill);
    cout<<"Array:"<<endl;
    for (int i = 0; i < arr_size; i++)
    {
        cout<<num_array[i]<<"   ";
    }
    cout<<endl;

    system("pause");
    return 0;
}

void setarr(int * begin,int * end,int num){
    for (int * p = begin; p != end; p++)
    {
        *p=num;
    }
}