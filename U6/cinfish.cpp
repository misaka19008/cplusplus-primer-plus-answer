#include<iostream>
using namespace std;
const int MAX=5;
int main(){
    int i;
    double fish[MAX];
    double total=0.0;

    cout<<"Please enter the weights of your fish.";
    cout<<"You may enter up to "<<MAX<<" fish <\"q\" to terminate>."<<endl;
    cout<<"fish #1: ";
    while (i < MAX && cin>>fish[i])
    {
        if (++i < MAX)
        {
            cout<<"fish #"<<i+1<<": ";
        }
        
    }
    for (int j = 0; j < i; j++)
    {
        total+=fish[j];
    }
    if (i == 0)
    {
        cout<<"No fish."<<endl;
    }
    else
    {
        cout<<total/i<<" = average weight of "<<i<<" fish."<<endl;
    }
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}