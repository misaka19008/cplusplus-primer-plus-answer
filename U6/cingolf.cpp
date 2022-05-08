#include<iostream>
using namespace std;
const int MAX=5;
int main(){
    int i;
    int golf[MAX];
    double total=0.0;
    double result=0.0;

    // Get data.
    cout<<"Please enter your golf scores."<<endl;
    cout<<"You must enter "<<MAX<<" scores."<<endl;
    for (i = 0; i < MAX; i++)
    {
        cout<<"Round #"<<i+1<<": ";
        while (!(cin>>golf[i]))
        {
            cin.clear();
            while (cin.get() != '\n')
            {
                continue;
            }
            cout<<"Please enter a number: ";
        }
        
    }
    
    // Get result.
    for (i = 0; i < MAX; i++)
    {
        total+=golf[i];
    }
    result=total/MAX;
    cout<<result<<" = average score "<<MAX<<" rounds."<<endl;
    cout<<"Done!";

    system("pause");
    return 0;
}