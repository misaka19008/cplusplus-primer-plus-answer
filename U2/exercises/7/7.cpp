#include<iostream>
using namespace std;

string convert(int,int);

int main(){
    int h;
    int m;
    string time;

    cout<<"Enter the number of hours:";
    cin>>h;
    cout<<"Enter the number of minutes:";
    cin>>m;
    time=convert(h,m);
    cout<<"Time: "<<time<<endl;

    system("pause");
    return 0;
}

string convert(int hour,int minute){
    int minutes;
    int trueHour;
    int trueMin;
    string trueTime;

    minutes=hour*60+minute;
    trueMin=minutes%60;
    trueHour=(minutes-trueMin)/60;
    trueTime=to_string(trueHour)+":"+to_string(trueMin);

    return trueTime;
}