#include<iostream>
#include<cmath>
using namespace std;
struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};
void rect_to_polar(const rect*,polar*);
void show_polar(const polar*);

int main(){
    rect rplace;
    polar pplace;

    cout<<"Enter x and y values: ";
    while (cin>>rplace.x>>rplace.y)
    {
        rect_to_polar(&rplace,&pplace);
        show_polar(&pplace);
        cout<<"Next two numbers: ";
    }
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}

void rect_to_polar(const rect * pxy,polar * pda){
    pda->distance=sqrt(pxy->x*pxy->x+pxy->y*pxy->y);
    pda->angle=atan2(pxy->y,pxy->x);
}

void show_polar(const polar * pda){
    const double RAD_TO_DEG=57.29577951;

    cout<<"distance = "<<pda->distance<<", angle = "<<pda->angle*RAD_TO_DEG<<" degrees."<<endl;
}