#ifndef EXEC1_H_
#define EXEC1_H_

const int LEN=90;
struct golf
{
    char fullname[LEN];
    int handicap;
};

void setgolf(golf & g,const char * name,int hc);
int setgolf(golf & g);
void handicap(golf & g,int hc);
void showgolf(const golf & g);

#endif