#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    char charr1[20];
    char charr2[20]="jaguar";
    string str1;
    string str2="panther";
    int len1;
    int len2;

    str1=str2;
    strcpy(charr1,charr2);
    str1+=" paste";
    strcat(charr1," juice");
    len1=str1.size();
    len2=strlen(charr1);
    cout<<"The string \""<<str1<<"\" contains "<<len1<<" characters."<<endl;
    cout<<"The string \""<<charr1<<"\" contians "<<len2<<" character."<<endl;

    system("pause");
    return 0;
}