#include<iostream>
using namespace std;
const int STRSIZE=80;
void showMenu(void);
void disByName(void);
void disByTitle(void);
void disByBopName(void);
void disByPre(void);
struct bop
{
    char fullname[STRSIZE];
    char title[STRSIZE];
    char bopname[STRSIZE];
    int preference;
};

struct bop members[5]=
{
    {"Wimp Macho","Hacker","Wimp Macho",0},
    {"Raki Rhodes","Programmer","Junior Programmer",2},
    {"Celia Laiter","Engineer","MIPS",1},
    {"Izumi Sagiri","Painter","Izumi Sagiri",0},
    {"Rie Takahashi","Voice Actor","EMT",2}
};

int main(){
    char choice;
    
    showMenu();
    cout<<"Enter a choice: ";
    cin>>choice;
    cout<<endl;
    while (choice != 'q')
    {
        switch (choice)
        {
        case 'a':
            disByName();
            break;
        case 'b':
            disByTitle();
            break;
        case 'c':
            disByBopName();
            break;
        case 'd':
            disByPre();
            break;
        default:
            cout<<"That's not a choice!"<<endl;
            break;
        }
        showMenu();
        cout<<"Enter a choice: ";
        cin>>choice;
    }
    cout<<"Bye!"<<endl;

    system("pause");
    return 0;
}

void showMenu(){
    cout<<"Benevolent Order of Programmers Report:\n"
          "a. Display by name       b. Display by title\n"
          "c. Display by bopname    d. Display by preference\n"
          "q. Quit\n";
}

void disByName(){
    cout<<"Display members' information by fullname:"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<members[i].fullname<<endl;
    }
    cout<<endl;
}

void disByTitle(){
    cout<<"Display members' information by title:"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<members[i].title<<endl;
    }
    cout<<endl;
}

void disByBopName(){
    cout<<"Display members' information by bopname:"<<endl;
    for (int i = 0; i < 4; i++)
    {
        cout<<members[i].bopname<<endl;
    }
    cout<<endl;
}

void disByPre(){
    int pre;

    cout<<"Display members' information by preference."<<endl;
    for (int i = 0; i < 4; i++)
    {
        pre=members[i].preference;
        switch (pre)
        {
        case 0:
            cout<<members[i].fullname<<endl;
            break;
        case 1:
            cout<<members[i].title<<endl;
            break;
        case 2:
            cout<<members[i].bopname<<endl;
            break;
        default:
            cout<<"Error: Data has been damaged! (Address: "<<members<<")"<<endl;
            exit(EXIT_FAILURE);
        }
    }
    cout<<endl;
}