#include<iostream>
#include<fstream>
using namespace std;
struct peopleList
{
    string name;
    double money;
};

int main(){
    int num=0;
    int count=0;
    peopleList *patrList;
    ifstream inFile;
    string filename;

    cout<<"Enter filename: ";
    cin>>filename;
    inFile.open(filename);
    if (!inFile.is_open())
    {
        cout<<"Error: File not found!"<<endl;
        exit(EXIT_FAILURE);
    }
    inFile>>num;
    inFile.get();
    while (inFile.good())
    {
        patrList=new peopleList[num];
        string patrons[num];
        string gr_patrons[num];
        patrons[0]=gr_patrons[0]="None";
        for (int i = 0; i < num; i++)
        {
            getline(inFile,patrList[i].name);
            inFile>>patrList[i].money;
            inFile.get();
        }
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
    }
    if (inFile.eof())
    {
        cout<<"EOF reached."<<endl;
    }
    else
    {
        cout<<"Error: Input terminated."<<endl;
    }
    delete [] patrList;
    inFile.close();
    
    system("pause");
    return 0;
}