#include<iostream>
using namespace std;
template <typename T>
T max5(T arr[]);
int main(){
    int iArr[5]={2,2,3,7,5};
    double dArr[5]={48.3,48.3,2.8,45.1,98.2};
    int iMax=0;
    double dMax=0;

    iMax=max5(iArr);
    dMax=max5(dArr);
    cout<<"The max value of \"iArr\" is "<<iMax<<"."<<endl;
    cout<<"The max value of \"dArr\" is "<<dMax<<"."<<endl;

    system("pause");
    return 0;
}

template <typename T>
T max5(T arr[]){
    T max=arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max=arr[i];
        }
    }
    return max;
}