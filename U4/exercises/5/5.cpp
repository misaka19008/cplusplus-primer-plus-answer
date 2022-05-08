#include<iostream>
#include<cstring>
using namespace std;
struct CandyBar
{
    string name;
    float weight;
    int calorie;
};

int main(){
    CandyBar snack={
        "Mocha Munch",
        2.3,
        350,
    };

    cout<<"Name: "<<snack.name<<endl;
    cout<<"Weight: "<<snack.weight<<endl;
    cout<<"Calories: "<<snack.calorie<<endl;

    system("pause");
    return 0;
}