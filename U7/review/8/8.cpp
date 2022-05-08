#include<iostream>
using namespace std;
int replace(char*,char,char);
int main(){
    int count;
    char before;
    char after;
    char str_input[200];

    cout<<"Enter sentences:"<<endl;
    cin.getline(str_input,200);
    cout<<"Enter the char you want to replace: ";
    cin>>before;
    cout<<"Enter the char after replace: ";
    cin>>after;
    count=replace(str_input,before,after);
    cout<<endl<<"Result:\n"<<str_input<<endl;
    cout<<count<<" char(s) changed."<<endl;
    
    system("pause");
    return 0;
    
}

int replace(char * str,char c1,char c2){
    int count=0;
    while (*str)
    {
        if (*str == c1)
        {
            *str=c2;
            count++;
        }
        else
        {
            str++;
        }
    }
    return count;
}