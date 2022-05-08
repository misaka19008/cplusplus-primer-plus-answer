#include<iostream>
#include "exec1.h"
using namespace std;
int main(){
    golf players1;
    golf players2;
    golf players3;
    golf players4;

    cout<<"Enter information:"<<endl<<endl;
    cout<<"Players #1"<<endl;
    setgolf(players1);
    cout<<endl<<"Players #2"<<endl;
    setgolf(players2);
    cout<<endl<<"Players #3"<<endl;
    setgolf(players3);
    cout<<endl<<"Players #4"<<endl;
    setgolf(players4);

    cout<<endl<<"Show info:"<<endl<<endl;
    cout<<"Player #1"<<endl;
    showgolf(players1);
    cout<<"Player #2"<<endl;
    showgolf(players2);
    cout<<"Player #3"<<endl;
    showgolf(players3);
    cout<<"Player #4"<<endl;
    showgolf(players4);
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}