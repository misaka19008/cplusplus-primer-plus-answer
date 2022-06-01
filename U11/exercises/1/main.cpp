#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include "exec1.h"
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
    ofstream fout;
    char fileName[60];

    cout<<"Enter filename: ";
    while (!(cin>>fileName))
    {
        cin.clear();
        while (cin.get() != '\n') continue;
        cout<<"Error, please enter filename again: ";
    }
    fout.open(fileName);
    if (!fout.is_open())
    {
        cout<<"Error: Could not open "<<fileName<<", quiting......"<<endl;
        exit(EXIT_FAILURE);
    }
    cout<<"Enter target distance (q to quit): ";
    while (cin>>target)
    {
        cout<<"Enter step length: ";
        if(!(cin>>dstep)) break;
        fout<<"Target distance: "<<target<<", Step size: "<<dstep<<endl;
        while (result.magval() < target)
        {
            direction=rand()%360;
            step.reset(dstep,direction,Vect::POL);
            result=result+step;
            steps++;
            fout<<steps<<": "<<result;
        }
        fout<<"After "<<steps<<" steps, the subject has the following location:\n"<<result<<endl;
        result.polar_mode();
        fout<<" or\n"<<result<<endl;
        fout<<"Average outward distance per step = "<<result.magval()/steps<<endl;
        steps=0;
        result.reset(0.0,0.0);
        cout<<"OK!"<<endl;
        cout<<"Enter target distance (q to quit): ";
    }
    cout<<"Bye!"<<endl;
    cin.clear();
    while (cin.get() != '\n') continue;

    system("pause");
    return 0;
}