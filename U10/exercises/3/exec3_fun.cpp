#include<iostream>
#include<cstring>
#include "exec3.h"
using namespace std;

Golf::Golf(){
    char name[LEN];
    int hc;

    cout<<"Enter golf player's name: ";
    while (!cin.getline(name,LEN))
    {
        cin.clear();
        while (cin.get() != '\n') continue;
        cout<<"Input error, please try again: ";
    }
    cout<<"Enter golf player's handicap: ";
    while (!(cin>>hc))
    {
        cin.clear();
        while (cin.get() != '\n') continue;
        cout<<"Input error, please try again: ";
    }
    cout<<name<<"::"<<hc<<endl;
    strcpy(fullname,name);
    handicap=hc;
}

Golf::Golf(const char * name,int hicap){
    strcpy(fullname,name);
    handicap=hicap;
}

Golf::~Golf(){
    // Default destructor.
}

void Golf::setHicap(int hc){                     // 小刀划屁股，开了眼了啊（doge）
    handicap=hc;
}

void Golf::showGolf(){
    cout<<"Name: "<<fullname<<endl;
    cout<<"Handicap: "<<handicap<<endl;
}