#include<iostream>
using namespace std;
void fillArray(int[]);
void showInfo(int[]);
double getAver(int[]);

int main(){
    double aver=0.0;
    int score[10];

    fillArray(score);
    showInfo(score);
    aver=getAver(score);
    cout<<"Average = "<<aver<<endl;

    system("pause");
    return 0;
}

void fillArray(int Arr[]){
    int i=0;

    cout<<"Enter golf marks: "<<endl;
    do
    {
       cout<<"Value #"<<i+1<<": ";
       cin>>Arr[i];
       cin.get();
       i++;
       cout<<"Press enter to continue, or press another key to quit: ";
       if (cin.get() != '\n')
       {
           for (; i < 10; i++)
           {
               Arr[i]=0;
           }
           break;
       }
    } while (i < 10);
    
}

void showInfo(int scoreArr[]){
    cout<<"Show your score:"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<i+1<<". "<<scoreArr[i]<<"\t";
    }
    cout<<endl;
}

double getAver(int arr[]){
    double total=0.0;
    double result=0.0;

    for (int i = 0; i < 10; i++)
    {
        total+=arr[i];
    }
    result=total/10;

    return result;
}