#include<iostream>
#include<ctime>
using namespace std;
int main(){
    float secs;
    clock_t delay;
    clock_t start;

    cout<<"Enter the delay time, in seconds: ";
    cin>>secs;
    delay=secs*CLOCKS_PER_SEC;
    cout<<"Starting......\a"<<endl;
    start=clock();
    while (clock() - start < delay)
    {
        ;
    }
    cout<<"Done!\a"<<endl;

    system("pause");
    return 0;
}