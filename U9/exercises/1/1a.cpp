#include<iostream>
#include<cstring>
#include "exec1.h"
using namespace std;

void setgolf(golf & g,const char * name,int hc){
    strcpy(g.fullname,name);
    g.handicap=hc;
}

int setgolf(golf & g){
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
    cin.get();
    
    if (name[0] == '\0')
    {
        return 0;
    }
    else
    {
        setgolf(g,name,hc);
        return 1;
    }
}

void handicap(golf & g,int hc){                     // 小刀划屁股，开了眼了啊（doge）
    g.handicap=hc;
}

void showgolf(const golf & g){
    cout<<"Name: "<<g.fullname<<endl;
    cout<<"Handicap: "<<g.handicap<<endl;
}