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
    CandyBar snack[3]={
        {"Mocha Munch",2.3,350},
        {"White Rabbit",3.6,50},
        {"Hsu Fu Chi",5,200}
    };

    cout<<"Name: "<<snack[0].name<<"        "<<"Weight: "<<snack[0].weight<<"       "
    <<"Calories: "<<snack[0].calorie<<endl;
    cout<<"Name: "<<snack[1].name<<"        "<<"Weight: "<<snack[1].weight<<"       "
    <<"Calories: "<<snack[1].calorie<<endl;
    cout<<"Name: "<<snack[2].name<<"        "<<"Weight: "<<snack[0].weight<<"       "
    <<"Calories: "<<snack[2].calorie<<endl;

    system("pause");
    return 0;
}