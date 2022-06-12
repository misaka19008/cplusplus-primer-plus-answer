#include<iostream>
#include<cstdlib>
#include<ctime>
#include "header_files/string1.h"
const int ARSIZE=10;
const int MAXLEN=81;
using namespace std;

int main(){
    String1 name;
    String1 sayings[ARSIZE];
    char temp[MAXLEN];
    int i;
    int total;

    cout<<"Hi! What's your name?"<<endl<<">>";
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
        srand(time(0));
        int choice=rand()%total;
        String1 * shortest=&sayings[0];
        String1 * first=&sayings[0];
        String1 * favorite=new String1(sayings[choice]);

        cout<<"Here are your sayings:"<<endl;
        for (i = 0; i < total; i++) cout<<sayings[i]<<endl;
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < shortest->length()) shortest=&sayings[i];
            if (sayings[i] < *first) first=&sayings[i];
        }
        cout<<"Shortest saying:"<<endl<<*shortest<<endl;
        cout<<"First alphabetically:"<<endl<<*first<<endl;
        cout<<"My favorite saying:"<<endl<<*favorite<<endl;
        delete favorite;
    }
    else cout<<"Not much to say, eh?"<<endl;

    system("pause");
    return 0;
}