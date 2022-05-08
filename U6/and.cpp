#include<iostream>
using namespace std;
const int ARSIZE=6;
int main(){
    int i=0;
    float temp;
    float naaq[ARSIZE];

    cout<<"Enter the NAAQs of your neighbors. Program terminates when you make "<<ARSIZE<<" entries or enter a negative value."<<endl;
    cout<<"First value: ";
    cin>>temp;
    while (i < ARSIZE && temp >= 0)
    {
        naaq[i]=temp;
        ++i;
        if (i < ARSIZE)
        {
            cout<<"Next value: ";
            cin>>temp;
        }
        
    }
    if (i == 0)
    {
        cout<<"There is NO DATA, quiting.........";
    }
    else
    {
        int count=0;
        float you;

        cout<<"Enter your NAAQ: ";
        cin>>you;
        for (int j = 0; j < i; j++)
        {
            if (naaq[j] > you)
            {
                ++count;
            }
            
        }
        cout<<count<<" of your neighbors have greater awareness of the New Age than you do."<<endl;
    }
    
    system("pause");
    return 0;
}