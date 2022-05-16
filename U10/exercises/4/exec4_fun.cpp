#include<iostream>
#include "exec4.h"
using namespace std;

Sales::Sales(){
    int i=0;
    double total=0.0;
    do
    {
        cout<<"Enter number #"<<i+1<<": ";
        if (!(cin>>sales[i])){
            cin.clear();
            while (cin.get() != '\n') continue;
            cout<<"Input error, please try again: ";
            cin>>sales[i];
        }
        i++;
    } while (i < QUARTERS);
    max=min=sales[0];
    for (i = 0; i < QUARTERS; i++)
    {
        total+=sales[i];
        if (max < sales[i]) max=sales[i];
        if (min > sales[i]) min=sales[i];
    }
    average=total/QUARTERS;
}

Sales::Sales(const double ar[],int n){
    double sum=0.0;
    if (n >= QUARTERS)
    {
        for (int i = 0; i < QUARTERS; i++) sales[i]=ar[i];
    }
    else
    {
        for (int i = 0; i < n; i++) sales[i]=ar[i];
        for (int i = n; i < QUARTERS; i++) sales[i]=0;
    }
    max=min=sales[0];
    for (int i = 0; i < QUARTERS; i++)
    {
        sum+=sales[i];
        if (max < sales[i]) max=sales[i];
        if (min > sales[i]) min=sales[i];
    }
    average=sum/QUARTERS;
}

Sales::~Sales(){
    // Default destructor.
}

void Sales::showSales() const {
    cout<<"Sales: ";
    for (int i = 0; i < QUARTERS; i++) cout<<sales[i]<<"  ";
    cout<<endl;
    cout<<"Average: "<<average<<endl;
    cout<<"Max value: "<<max<<endl;
    cout<<"Min value: "<<min<<endl;
}