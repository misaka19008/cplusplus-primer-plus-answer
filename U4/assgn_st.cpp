#include<iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volumn;
    double price;
};

int main(){
    inflatable bouquet={
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;

    cout<<"bouquet: "<<bouquet.name<<" for $"<<bouquet.price<<endl;
    choice=bouquet;
    cout<<"choice: "<<choice.name<<" for $"<<choice.price<<endl;

    system("pause");
    return 0;
}