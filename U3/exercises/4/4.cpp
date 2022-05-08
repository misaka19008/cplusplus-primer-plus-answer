#include<iostream>
using namespace std;
string process(long long);
int main(){
    string time;
    long long seconds;

    cout<<"Enter the number of seconds: ";
    cin>>seconds;
    time=process(seconds);
    cout<<seconds<<" seconds = "<<time<<endl;

    system("pause");
    return 0;
}

string process(long long sec){
    int days;
    int hours;
    int minutes;
    int trueSec;
    string trueTime;

    days=sec/86400;
    hours=(sec%86400)/3600;
    minutes=(sec%86400%3600)/60;
    trueSec=sec%86400%3600%60;
    trueTime=to_string(days)+" days, "+to_string(hours)+" hours, "+to_string(minutes)+" minutes, "+to_string(trueSec)+" seconds.";
    return trueTime;
}