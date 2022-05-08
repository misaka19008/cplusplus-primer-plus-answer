#include<iostream>
using namespace std;
struct inflatable
{
    char name[40];
    float volumn;
    double price;
};

int main(){
    inflatable guest[2]={
        {"Bamdi",0.5,21.99},
        {"Godzilla",2000,565.99}
    };

    cout<<"The guests "<<guest[0].name<<" and "<<guest[1].name<<" have a combined volume of "
    <<guest[0].volumn+guest[1].volumn<<" cubic feet."<<endl;

    system("pause");
    return 0;
}