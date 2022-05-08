#include<iostream>
using namespace std;
struct antarctica_years_end
{
    int year;
};

int main(){
    antarctica_years_end s01;
    antarctica_years_end s02;
    antarctica_years_end s03;
    antarctica_years_end * pa=&s02;
    antarctica_years_end trio[3];
    const antarctica_years_end * arp[3]={&s01,&s02,&s03};
    const antarctica_years_end ** ppa=arp;
    auto ppb=arp;

    s01.year=1998;
    pa->year=1999;
    trio[0].year=2003;
    cout<<trio->year<<endl;
    cout<<arp[1]->year<<endl;
    cout<<(*ppa)->year<<endl;
    cout<<(*(ppb+1))->year<<endl;

    system("pause");
    return 0;
}