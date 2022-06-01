#include<iostream>
#include<cstdlib>
#include<ctime>
#include "exec3.h"
using namespace std;
using VECTOR::Vect;

int main(){
    srand(time(0));
    double direction;
    Vect step;
    Vect result(0.0,0.0);
    unsigned long steps=0;
    double target;
    double dstep;
    double max_step=0;
    double min_step=0;
    double aver_step=0;
    double count=0;
    double step_cache=0;

    cout<<"Enter target distance (q to quit): ";
    while (cin>>target)
    {
        cout<<"Enter step length: ";
        if(!(cin>>dstep)) break;
        while (result.magval() < target)
        {
            direction=rand()%360;
            step.reset(dstep,direction,Vect::POL);
            result=result+step;
            steps++;
        }
        cout<<"After "<<steps<<" steps, the subject has the following location:\n"<<result<<endl;
        result.polar_mode();
        cout<<" or\n"<<result<<endl;
        cout<<"Average outward distance per step = "<<result.magval()/steps<<endl;
        if (steps > max_step) max_step=steps;
        if (min_step == 0) min_step=max_step;
        if (steps < min_step) min_step=steps;
        step_cache=steps;
        steps=0;
        ++count;
        result.reset(0.0,0.0);
        cout<<"Enter target distance (q to quit): ";
    }
    aver_step=step_cache/count;
    cout<<endl;
    cout<<"Max steps = "<<max_step<<endl;
    cout<<"Min steps = "<<min_step<<endl;
    cout<<"Average steps = "<<aver_step<<endl;
    cout<<"Bye!"<<endl;
    cin.clear();
    while (cin.get() != '\n') continue;

    system("pause");
    return 0;
}