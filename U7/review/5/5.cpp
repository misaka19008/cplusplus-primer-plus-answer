#include<iostream>
using namespace std;
const int ARSIZE=6;
double get_max(double[],const int);
int main(){
    double result=0.0;
    double num_arr[ARSIZE]={171.5,165.3,172.6,173.1,168.0,176.5};

    result=get_max(num_arr,ARSIZE);

    cout<<"The tallest girl Zhao Lingyue's height is "<<result<<endl;

    system("pause");
    return 0;
}

double get_max(double arr[],const int size){
    double max_value=arr[0];

    for (int i = 0; i < size; i++)
    {
        if (max_value < arr[i])
        {
            max_value=arr[i];
        }
    }
    
    return max_value;
}