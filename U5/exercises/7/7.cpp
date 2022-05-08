#include<iostream>
using namespace std;
struct informations_car
{
    char company[60];
    int year;
};

int main(){
    int num_catalogs=0;

    cout<<"How many cars do you wish to catalog: ";
    cin>>num_catalogs;
    cin.get();
    informations_car *cars=new informations_car[num_catalogs];
    for (int i = 0; i < num_catalogs; i++)
    {
        cout<<"Car #"<<i+1<<":"<<endl;
        cout<<"Please enter the make: ";
        cin.getline(cars[i].company,60);
        cout<<"Please enter the year made: ";
        cin>>cars[i].year;
        cin.get();
    }
    cout<<endl;
    cout<<"Here is your collection:"<<endl;
    for (int i = 0; i < num_catalogs; i++)
    {
        cout<<cars[i].year<<"\t"<<cars[i].company<<endl;
    }
    delete [] cars;
    
    system("pause");
    return 0;
}