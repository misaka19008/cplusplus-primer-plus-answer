#include<iostream>
#include "header_files/tabtenn1.h"
using std::cout;
using std::endl;

int main(){
    TableTennisPlayer player1("Lingyue","Zhao",true);
    RatedPlayer rplayer1(1140,"Zhentian","Yan");
    RatedPlayer rplayer2(1212,player1);

    rplayer1.name();
    if (rplayer1.HasTable()) cout<<": has a table."<<endl;
    else cout<<": hasn't a table."<<endl;
    player1.name();
    if (player1.HasTable()) cout<<": has a table."<<endl;
    else cout<<": hasn't a table."<<endl;
    cout<<"Name: ";
    rplayer1.name();
    cout<<"; Rating: "<<rplayer1.getRating()<<endl;
    cout<<"Name: ";
    rplayer2.name();
    cout<<"; Rating: "<<rplayer2.getRating()<<endl;

    system("pause");
    return 0;
}