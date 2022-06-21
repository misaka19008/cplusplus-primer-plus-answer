#include<iostream>
#include "header_files/tabtenn0.h"

TableTennisPlayer::TableTennisPlayer(const string & fn,const string & ln,bool ht){
    firstname=fn;
    lastname=ln;
    hasTable=ht;
}

void TableTennisPlayer::name() const {
    std::cout<<lastname<<", "<<firstname;
}