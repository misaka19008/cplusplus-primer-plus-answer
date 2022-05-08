#include<iostream>
#include "exec4.h"
using namespace SALES;
using namespace std;

void SALES::setSales(Sales & s,const double ar[],int n){
    double sum=0.0;
    if (n >= QUARTERS)
    {
        for (int i = 0; i < QUARTERS; i++) s.sales[i]=ar[i];
    }
    else
    {
        for (int i = 0; i < n; i++) s.sales[i]=ar[i];
        for (int i = n; i < QUARTERS; i++) s.sales[i]=0;
    }
    s.max=s.min=s.sales[0];
    for (int i = 0; i < QUARTERS; i++)
    {
        sum+=s.sales[i];
        if (s.max < s.sales[i]) s.max=s.sales[i];
        if (s.min > s.sales[i]) s.min=s.sales[i];
    }
    s.average=sum/QUARTERS;
}

void SALES::setSales(Sales & s){
    int i=0;
    double arr[QUARTERS]={};
    do
    {
        cout<<"Enter number #"<<i+1<<": ";
        if (!(cin>>arr[i])){
            cin.clear();
            while (cin.get() != '\n') continue;
            cout<<"Input error, please try again: ";
            cin>>arr[i];
        }
        i++;
    } while (i < QUARTERS);
    setSales(s,arr,4);
}

void SALES::showSales(const Sales & s){
    cout<<"Sales: ";
    for (int i = 0; i < QUARTERS; i++) cout<<s.sales[i]<<"  ";
    cout<<endl;
    cout<<"Average: "<<s.average<<endl;
    cout<<"Max value: "<<s.max<<endl;
    cout<<"Min value: "<<s.min<<endl;
}