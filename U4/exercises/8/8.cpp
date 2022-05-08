#include<iostream>
#include<cstring>
using namespace std;
struct aboutPizza
{
    int diameter;
    float weight;
    string comName;
};

int main(){
    int diameter_cache;
    float weight_cache;
    string comName_cache;
    aboutPizza *pizza=new aboutPizza;

    cout<<"Enter the diameter of the pizza: ";
    cin>>diameter_cache;
    cin.get();
    cout<<"Enter the weight of the pizza: ";
    cin>>weight_cache;
    cin.get();
    cout<<"Enter the name of the company: ";
    cin>>comName_cache;
    cin.get();
    cout<<endl;

    pizza->diameter=diameter_cache;
    pizza->weight=weight_cache;
    pizza->comName=comName_cache;

    cout<<"Diameter: "<<pizza->diameter<<endl;
    cout<<"Weight: "<<pizza->weight<<endl;
    cout<<"Company Name: "<<pizza->comName<<endl;
    delete pizza;

    system("pause");
    return 0;
}