#include<iostream>
using namespace std;
const int YEARS=4;
const int CITIES=5;
const char * cities[CITIES]=
{
    "Gribble City",
    "Gribbletown",
    "New Gribble",
    "San Gribble",
    "Gribble Vista"
};

int main(){
    int maxtemps[YEARS][CITIES]=
    {
        {96,100,87,101,105},
        {96,98,91,107,104},
        {97,101,93,108,107},
        {98,103,95,109,108}
    };

    cout<<"Maximum temperatures for 2008-2011:"<<endl<<endl;
    for (int city = 0; city < CITIES; city++)
    {
        cout<<cities[city]<<":\t";
        for (int year = 0; year < YEARS; year++)
        {
            cout<<maxtemps[year][city]<<"\t";
        }
        cout<<endl;
    }
    
    system("pause");
    return 0;
}