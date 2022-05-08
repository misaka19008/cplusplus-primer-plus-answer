#include<iostream>
using namespace std;
const int MAX=5;
double * fill_array(double*,double*);
void show_array(double*,double*);
void revalue(double,double*,double*);
int main(int argc,char *argv[]){
    double factor;
    double properties[MAX];

    double * pend=fill_array(properties,properties+MAX);
    show_array(properties,pend);
    if (pend-properties > 0)
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
        revalue(factor,properties,pend);
        show_array(properties,pend);
    }
    cout<<"Done!"<<endl;

    system("pause");
    return 0;
}

double * fill_array(double * begin,double * end){
    double * p;
    double temp;

    for (p = begin; p != end; p++)
    {
        cout<<"Enter value #"<<(p-begin)/sizeof(double)+1<<": ";
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
        *p=temp;
    }
    return p;
}

void show_array(double * begin,double * end){
    double * p;
    for (p = begin; p != end; p++)
    {
        cout<<"Property #"<<(p-begin)/sizeof(double)+1<<": $"<<*p<<endl;
    }
}

void revalue(double r,double * begin,double * end){
    double * p;
    for (p = begin; p != end; p++)
    {
        *p=r;
    }
}