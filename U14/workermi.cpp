#include<iostream>
#include "header_files/workermi.h"
using std::cout;
using std::cin;
using std::endl;
using std::getline;

// Worker's methods.
void Worker::showData() const {
    cout<<"Name: "<<fullname<<endl;
    cout<<"Employee ID: "<<id<<endl;
}

void Worker::getData() {
    getline(cin,fullname);
    cout<<"Enter worker's ID: ";
    cin>>id;
    while (cin.get() != '\n') continue;
}

Worker::~Worker() {/* Pure virtual destructor. */}

// Waiter's methods.

void Waiter::showData() const {
    cout<<"Panache rating: "<<panache<<endl;
}

void Waiter::getData() {
    cout<<"Enter waiter's panache rating: ";
    cin>>panache;
    while (cin.get() != '\n') continue;
}

void Waiter::set() {
    cout<<"Enter waiter's name: ";
    Worker::getData();
    getData();
}

void Waiter::show() const {
    cout<<"Category: waiter"<<endl;
    Worker::showData();
    showData();
}

// Singer's methods.
char * Singer::pv[Singer::Vtypes]={"other","alto","contralto","soprano","bass","baritone","tenor"};

void Singer::showData() const {
    cout<<"Vocal range: "<<pv[voice]<<endl;
}

void Singer::getData() {
    int i;
    
    cout<<"Enter number for singer's vocal range: ";
    for (i = 0; i < Vtypes; i++)
    {
        cout<<i<<": "<<pv[i]<<" ";
        if (i%4 == 3) cout<<endl;
    }
    if (i%4 != 0) cout<<endl;
    cin>>voice;
    while (cin.get() != '\n') continue;
}

void Singer::set() {
    cout<<"Enter singer's name: ";
    Worker::getData();
    getData();
}

void Singer::show() const {
    cout<<"Category: singer"<<endl;
    Worker::showData();
    showData();
}

// SingingWaiter's methods.
void SingingWaiter::showData() const {
    Waiter::showData();
    Singer::showData();
}

void SingingWaiter::getData() {
    Waiter::getData();
    Singer::getData();
}

void SingingWaiter::set() {
    cout<<"Enter singing waiter's name: ";
    Worker::getData();
    getData();
}

void SingingWaiter::show() const {
    cout<<"Category: singing waiter"<<endl;
    Worker::showData();
    showData();
}