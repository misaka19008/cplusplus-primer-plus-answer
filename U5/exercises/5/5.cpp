#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int sales;
    int book_num[12];
    string text_month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    for (int i = 0; i < 12; i++)
    {
        cout<<"Enter the sales volume of \"C++ For Fools\" in "<<text_month[i]<<":";
        cin>>book_num[i];
    }
    for (int i = 0; i < 12; i++)
    {
        sales+=book_num[i];
    }
    cout<<endl<<"The total sales volume this year is "<<sales<<" copies."<<endl;

    system("pause");
    return 0;
}