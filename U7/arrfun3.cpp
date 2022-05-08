#include<iostream>
using namespace std;
const int MAX=5;
int fill_array(double[],int);
void show_array(const double[],int);
void revalue(double,double[],int);
int main(){
    int size;
    double factor;
    double properties[MAX];

    size=fill_array(properties,MAX);
    show_array(properties,size);
    if (size > 0)
    {
        cout<<"Enter revaluation factor: ";
        while (!(cin>>factor))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout<<"Bad input, please enter a number: ";
        }
        revalue(factor,properties,size);
        show_array(properties,size);
    }
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}

int fill_array(double ar[],int limit){
    int i;
    double temp;

    for (i = 0; i < limit; i++)
    {
        cout<<"Enter value #"<<i+1<<": ";
        cin>>temp;
        if (!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout<<"Bad input, input process terminated!"<<endl;
            break;
        }
        else if (temp < 0)
        {
            break;
        }
        ar[i]=temp;
    }
    return i;
}

void show_array(const double ar[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Property #"<<i+1<<": $"<<ar[i]<<endl;
    }
}

void revalue(double r,double ar[],int n){
    for (int i = 0; i < n; i++)
    {
        ar[i]*=r;
    }
}