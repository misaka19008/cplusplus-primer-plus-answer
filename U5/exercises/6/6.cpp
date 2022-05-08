#include<iostream>
#include<cstring>
using namespace std;
int main(){
    long sales=0;
    long sales_thisYear=0;
    int book_num[3][12];
    string text_years[3]={"2019","2020","2021"};
    string text_month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter the sales volume of \"C++ For Fools\" in "<<text_years[i]<<":"<<endl;
        for (int j = 0; j < 12; j++)
        {
            cout<<text_years[i]<<"\t"<<text_month[j]<<": ";
            cin>>book_num[i][j];
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            sales+=book_num[i][j];
            sales_thisYear+=book_num[i][j];
        }
        cout<<"The total sales volume of \"C++ For Fools\" in "<<text_years[i]<<" is "<<sales_thisYear<<endl;
        sales_thisYear=0;
    }
    cout<<endl<<"The total sales volumes of \"C++ For Fools\" in three years is "<<sales<<"."<<endl;

    system("pause");
    return 0;
}