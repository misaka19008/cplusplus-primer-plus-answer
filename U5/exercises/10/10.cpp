#include<iostream>
using namespace std;
int main(){
    int rows=0;

    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows-i-1; j++)
        {
            cout<<".";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<"Done!"<<endl;

    system("pause");
    return 0;
}