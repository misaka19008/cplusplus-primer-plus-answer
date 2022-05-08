#include<iostream>
using namespace std;
struct inflatable
{
    char name[40];
    float volume;
    double price;    
};

int main(){
    inflatable * ps=new inflatable;

    cout<<"Enter name of inflatable item: ";
    cin.get(ps->name,20);
    cout<<"Enter volume in cubic feet: ";
    cin>>(*ps).volume;
    cout<<"Enter price: $";
    cin>>ps->price;
    cout<<"Name: "<<(*ps).name<<endl;
    cout<<"Volume: "<<ps->volume<<endl;
    cout<<"Price: "<<ps->price<<endl;
    delete ps;

    system("pause");
    return 0;
}
