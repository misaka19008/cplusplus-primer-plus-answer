#include<iostream>
using namespace std;
const int LEN=66;
const int DIVS=6;
void subdivide(char[],int,int,int);

int main(){
    int i;
    int num_min=0;
    int num_max=LEN-2;
    char ruler[LEN];

    for (i = 0; i < num_max; i++)
    {
        ruler[i]=' ';
    }
    ruler[LEN-1]='\0';
    ruler[num_min]=ruler[num_max]='|';
    cout<<ruler<<endl;
    for (i = 1; i <= DIVS; i++)
    {
        subdivide(ruler,num_min,num_max,i);
        cout<<ruler<<endl;
        for (int j = 1; j < num_max; j++)
        {
            ruler[j]=' ';
        }
    }
    
    system("pause");
    return 0;
}

void subdivide(char ar[],int low,int high,int level){
    int mid;

    if (level == 0)
    {
        return;
    }
    mid=(high+low)/2;
    ar[mid]='|';
    subdivide(ar,low,mid,level-1);
    subdivide(ar,mid,high,level-1);
}