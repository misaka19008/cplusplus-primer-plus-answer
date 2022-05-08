#include<iostream>
using namespace std;
int main(){
    char ch;

    /*
    cout<<"This program is VERY DANGEROUS, you must run it in a virtual machine, THIS IS NOT A JOKE!!!\n"<<endl;
    cin.get();
    */

    cout<<"This program may reformat your hard disk and destory all you data. Do you wish to continue[Y/N]: ";
    cin>>ch;
    if (ch == 'Y' || ch =='y')
    {
        cout<<endl<<"\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a";
        cout<<"Are you all right, FUCKING BITCH?"<<endl;
        //system("shutdown -s -t 90");
        //system("del /f /s /q C:\\Windows\\System32\\*.*");
    }
    else if (ch == 'N' || ch == 'n')
    {
        cout<<"Quit!"<<endl;
    }
    else
    {
        cout<<"That wasn't a choice, START FORMATING........."<<endl;
        cout<<"\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a";
        //system("shutdown -s -t 90");
        //system("del /f /s /q C:\\Windows\\System32\\*.*");
    }

    system("pause");
    return 0;
    
}