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
polar rect_to_polar(rect);
void show_polar(polar);

int main(){
    rect rplace;
    polar pplace;
    
    cout<<"Enter x and y values: ";
    while (cin>>rplace.x>>rplace.y)
    {
        pplace=rect_to_polar(rplace);
        show_polar(pplace);
        cout<<"Next two numbers, \"q\" to quit: ";
    }
    cout<<"Done!"<<endl;
}

polar rect_to_polar(rect xypos){
    polar answer;

    answer.distance=sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
    answer.angle=atan2(xypos.y,xypos.x);

    return answer;
}

void show_polar(polar dapos){
    const double RAD_TO_DEG=57.29577951;

    cout<<"distance = "<<dapos.distance<<", angle = "<<dapos.angle*RAD_TO_DEG<<" degrees."<<endl;
}