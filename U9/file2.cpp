#include<iostream>
#include<cmath>
#include "header_files/coordin.h"
using namespace std;

polar rect_to_polar(rect xypos){
    polar answer;

    answer.distance=sqrt(xypos.x*xypos.x+xypos.y*xypos.y);
    answer.angle=atan2(xypos.y,xypos.x);
    return answer;
}

void show_polar(polar dapos){
    const double RAD_TO_DEG=57.29577951;

    cout<<"Distance: "<<dapos.distance<<endl;
    cout<<"Angle: "<<dapos.angle*RAD_TO_DEG<<" degrees"<<endl;
}