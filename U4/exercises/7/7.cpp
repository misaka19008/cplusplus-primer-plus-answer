#include<iostream>
#include<cstring>
using namespace std;
struct aboutPizza
{
    string comName;
    float diameter;
    float weight;
};

int main(){
    aboutPizza pizza;
    
    cout<<"Enter the name of the company: ";
    getline(cin,pizza.comName);
    cout<<"Enter the diameter of the pizza: ";
    cin>>pizza.diameter;
    cin.get();
    cout<<"Enter the weight of the pizza: ";
    cin>>pizza.weight;
    cin.get();

    cout<<"Company Name: "<<pizza.comName<<endl;
    cout<<"Diameter: "<<pizza.diameter<<endl;
    cout<<"Weight: "<<pizza.weight<<endl;

    system("pause");
    return 0;
}