#include<iostream>
#include<string>
#include<array>
using namespace std;
const int SEASONS=4;
const array<string,SEASONS> SNAMES={"Spring","Summer","Autumn","Winter"};
void fill(array<double,SEASONS>*);
void show(array<double,SEASONS>);

int main(){
    array<double,SEASONS> expenses;
    fill(&expenses);
    show(expenses);

    system("pause");
    return 0;
}

void fill(array<double,SEASONS> * pa){
    for (int i = 0; i < SEASONS; i++)
    {
        cout<<"Enter "<<SNAMES[i]<<" expenses: ";
        cin>>(*pa)[i];
    }
}

void show(array<double,SEASONS> da){
    double total=0.0;

    cout<<endl<<"EXPENSES:"<<endl;
    for (int i = 0; i < SEASONS; i++)
    {
        cout<<SNAMES[i]<<": $"<<da[i]<<endl;
        total+=da[i];
    }
    cout<<"Total: $"<<total<<endl;   
}