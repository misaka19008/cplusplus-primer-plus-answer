#include<iostream>
using namespace std;
void printStr(char * str,int isPrintingLoop=0);
int count=0;

int main(){
    char str_input[100];
    int isLoop=0;

    cout<<"Enter a sentence:"<<endl;
    cin.getline(str_input,100);
    cout<<"Enter a integer: ";
    cin>>isLoop;
    if (isLoop == 0)
    {
        printStr(str_input);
    }
    else
    {
        printStr(str_input);
        printStr(str_input);
        printStr(str_input,isLoop);
    }
    
    system("pause");
    return 0;
}

void printStr(char * str,int isPrintingLoop){
    ++count;
    if (isPrintingLoop)
    {
        cout<<"Printing Loop:"<<endl;
        for (int i = 0; i < count; i++)
        {
            cout<<str<<endl;
        }
    }
    else
    {
        cout<<"Pringing once:"<<endl;
        cout<<str<<endl;
    }
}