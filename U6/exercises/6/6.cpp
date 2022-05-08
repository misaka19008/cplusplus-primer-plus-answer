#include<iostream>
#include<cstring>
using namespace std;
struct peopleList
{
    string name;
    double money;
};

int main(){
    int num;
    int count=0;
    peopleList *patrList;

    cout<<"Enter the number of patrons: ";
    cin>>num;
    cin.get();
    patrList=new peopleList[num];           // Allocate memory to patrList.
    string patrons[num];
    string gr_patrons[num];
    patrons[0]=gr_patrons[0]="None";
    
    // Get donors' information.
    for (int i = 0; i < num; i++)           
    {
        cout<<"Patrons #"<<i+1<<":"<<endl;
        cout<<"Name: ";
        getline(cin,patrList[i].name);
        cout<<"The number of donations: ";
        cin>>patrList[i].money;
        cin.get();
    }
    cout<<endl<<endl;

    // Write data to arraies.
    for (int i = 0; i < num; i++)
    {
        if (patrList[i].money >= 10000)
        {
            gr_patrons[i-count]=patrList[i].name;
        }
        else
        {
            ++count;
        }    
    }
    count=0;
    for (int i = 0; i < num; i++)
    {
        if (patrList[i].money > 0 && patrList[i].money < 10000)
        {
            patrons[i-count]=patrList[i].name;
        }
        else
        {
            ++count;
        }
    }
    
    // Display information.
    cout<<"Grand Patrons:"<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<gr_patrons[i]<<"\t";
    }
    cout<<endl<<endl;
    cout<<"Patrons:"<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<patrons[i]<<"\t";
    }
    cout<<endl<<endl;
    delete [] patrList;
    
    system("pause");
    return 0;
}