#include<iostream>
#include "header_files/worker0.h"
using std::cin;
using std::cout;
using std::endl;
using std::getline;

Worker::~Worker() {}

void Worker::set(){
    cout<<"Enter worker's name: ";
    getline(cin,fullname);
    cout<<"Enter worker's ID: ";
    cin>>id;
    while (cin.get() != '\n') continue;
}

void Worker::show() const {
    cout<<"Name: "<<fullname<<endl;
    cout<<"Employee ID: "<<id<<endl;
}

void Waiter::set(){
    Worker::set();
    cout<<"Enter waiter's panache rating: ";
    cin>>panache;
    while (cin.get() != '\n') continue;
}

void Waiter::show() const {
    cout<<"Category: waiter"<<endl;
    Worker::show();
    cout<<"Panache rating: "<<panache<<endl;
}

char * Singer::pv[]={"other","alto","contralto","soprano","bass","baritone","tenor"};

void Singer::set(){
    Worker::set();
    cout<<"Enter number for singer's vocal range:"<<endl;
    int i;
    for (i = 0; i < Vtypes; i++)
    {
        cout<<i<<": "<<pv[i]<<" ";
        if (i%4 == 3) cout<<endl;
    }
    if (i%4 != 0) cout<<endl;
    while (cin>>voice && (voice < 0 || voice >= Vtypes)) 
        cout<<"Please enter a value >= 0 and <"<<Vtypes<<endl;
    while (cin.get() != '\n') continue;
}

void Singer::show() const {
    cout<<"Category: singer"<<endl;
    Worker::show();
    cout<<"Vocal range: "<<pv[voice]<<endl;
}