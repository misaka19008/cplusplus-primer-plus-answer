#include<iostream>
#include "header_files/string1.h"
const int ARSIZE=10;
const int MAXLEN=81;
using std::cout;
using std::cin;
using std::endl;

int main(){
    String1 name;
    String1 sayings[ARSIZE];
    char temp[MAXLEN];
    int i;
    int total;

    cout<<"Hi! What's your name?\n>> ";
    cin>>name;
    cout<<name<<", please enter up to "<<ARSIZE<<" short sayings <empty line to quit>:"<<endl;
    for (i = 0; i < ARSIZE; i++)
    {
        cout<<i+1<<": ";
        cin.get(temp,MAXLEN);
        while (cin && cin.get() != '\n') continue;
        if (!cin || temp[0] == '\0') break;
        else sayings[i]=temp;
    }
    total=i;

    if (total > 0)
    {
        int shortest=0;
        int first=0;
        
        cout<<"Here are your sayings:"<<endl;
        for (i = 0; i < total; i++) cout<<sayings[i][0]<<": "<<sayings[i]<<endl;
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < sayings[shortest].length()) shortest=i;
            if (sayings[i].length() < sayings[first].length()) first=i;
        }
        cout<<"Shortest saying:\n"<<sayings[shortest]<<endl;
        cout<<"First alphabetically:\n"<<sayings[first]<<endl;
        cout<<"This program used "<<String1::howMany()<<" String1 objects. Bye!"<<endl;
    }
    else cout<<"No input! Bye."<<endl;

    system("pause");
    return 0;
}