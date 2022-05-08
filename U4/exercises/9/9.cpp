#include<iostream>
#include<cstring>
using namespace std;
struct Candybar
{
    char name[50]="None";
    float weight=0.0;
    int calories=0;
};

int main(){
    Candybar *candy=new Candybar[3];

    strcpy(candy[0].name,"Mocha Munch");
    candy[0].weight=2.3;
    candy[0].calories=350;

    strcpy(candy[1].name,"White Rabbit");
    candy[1].weight=3.6;
    candy[1].calories=50;

    cout<<"Name: "<<candy[0].name<<"       "<<"Weight: "<<candy[0].weight<<"       "
    <<"Calories: "<<candy[0].calories<<endl;
    cout<<"Name: "<<candy[1].name<<"       "<<"Weight: "<<candy[1].weight<<"       "
    <<"Calories: "<<candy[1].calories<<endl;
    cout<<"Name: "<<candy[2].name<<"       "<<"Weight: "<<candy[2].weight<<"       "
    <<"Calories: "<<candy[2].calories<<endl;
    delete [] candy;

    system("pause");
    return 0;
}