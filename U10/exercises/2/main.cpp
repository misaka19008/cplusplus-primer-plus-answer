#include<iostream>
#include "exec2.h"
using namespace std;
int main(){
    Person one;
    Person two("Smythecraft");
    Person three("Zhao","Lingyue");

    one.Show();
    one.FormatShow();
    cout<<endl;
    two.Show();
    two.FormatShow();
    cout<<endl;
    three.Show();
    three.FormatShow();
    cout<<endl;

    system("pause");
    return 0;
}