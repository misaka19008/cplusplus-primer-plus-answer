#include<iostream>
#include "header_files/tabtenn0.h"
using namespace std;

int main(){
    TableTennisPlayer player1("Lingyue","Zhao",true);
    TableTennisPlayer player2("Zixin","Zhang",false);
    
    player1.name();
    if (player1.HasTable()) cout<<": has a table."<<endl;
    else cout<<": hasn't a table."<<endl;
    player2.name();
    if (player2.HasTable()) cout<<": has a table."<<endl;
    else cout<<": hasn't a table."<<endl;

    system("pause");
    return 0;
}