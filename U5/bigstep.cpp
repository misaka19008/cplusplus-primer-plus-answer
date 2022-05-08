#include<iostream>
using namespace std;
int main(){
    int step;

    cout<<"Enter an integer: ";
    cin>>step;
    cout<<"Counting by: "<<step<<"s:"<<endl;
    for (int i = 0; i < 100; i=i+step)
    {
        cout<<"i = "<<i<<endl;
    }
    
    system("pause");
    return 0;
}