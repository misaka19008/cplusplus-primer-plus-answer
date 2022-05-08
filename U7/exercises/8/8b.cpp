#include<iostream>
#include<string>
using namespace std;
const int SEASONS=4;
const char * SNAMES[]={"Spring","Summer","Autumn","Winter"};
struct exp_seasons
{
    double expe[SEASONS];
};

void fill(double[],int);
void show(const double[],int);

int main(){
    exp_seasons expenses;
    fill(expenses.expe,SEASONS);
    show(expenses.expe,SEASONS);

    system("pause");
    return 0;
}

void fill(double pa[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter "<<SNAMES[i]<<" expenses: ";
        cin>>pa[i];
    }
}

void show(const double da[],int size){
    double total=0.0;
    cout<<endl<<"Expenses:"<<endl;
    for (int i = 0; i < SEASONS; i++)
    {
        cout<<SNAMES[i]<<": $"<<da[i]<<endl;
        total+=da[i];
    }
    cout<<"Total: $"<<total<<endl;
}